#include <iostream>
#include <vector>
#include <iomanip>
#include <climits>
using namespace std;

struct Process {
    int id;
    int arrivalTime;
    int burstTime;
    int remainingTime;
    int waitingTime;
    int turnaroundTime;
    int completionTime;
};

// Function to print Gantt Chart
void printGanttChart(const vector<int>& gantt) {
    cout << "\nGantt Chart:\n|";
    for (size_t i = 0; i < gantt.size(); ++i) {
        if (i == 0 || gantt[i] != gantt[i - 1])
            cout << " P" << gantt[i] << " |";
    }
    cout << "\n0";
    int time = 0;
    for (size_t i = 1; i <= gantt.size(); ++i) {
        if (i == gantt.size() || gantt[i] != gantt[i - 1]) {
            cout << setw(5) << i;
        }
    }
    cout << "\n";
}

int main() {
    int n, currentTime = 0, completed = 0;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<Process> p(n);
    for (int i = 0; i < n; i++) {
        p[i].id = i + 1;
        cout << "Enter Arrival Time and Burst Time for Process P" << i + 1 << ": ";
        cin >> p[i].arrivalTime >> p[i].burstTime;
        p[i].remainingTime = p[i].burstTime;
    }

    vector<int> ganttChart;
    while (completed < n) {
        int idx = -1;
        int minRem = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (p[i].arrivalTime <= currentTime && p[i].remainingTime > 0 &&
                p[i].remainingTime < minRem) {
                minRem = p[i].remainingTime;
                idx = i;
            }
        }

        if (idx != -1) {
            ganttChart.push_back(p[idx].id);
            p[idx].remainingTime--;
            currentTime++;

            if (p[idx].remainingTime == 0) {
                p[idx].completionTime = currentTime;
                p[idx].turnaroundTime = currentTime - p[idx].arrivalTime;
                p[idx].waitingTime = p[idx].turnaroundTime - p[idx].burstTime;
                completed++;
            }
        } else {
            ganttChart.push_back(0); // CPU idle
            currentTime++;
        }
    }

    // Output Results
    double totalWT = 0, totalTAT = 0;
    cout << "\nP\tAT\tBT\tCT\tWT\tTAT\n";
    for (const auto& proc : p) {
        cout << "P" << proc.id << "\t" << proc.arrivalTime << "\t" << proc.burstTime << "\t"
             << proc.completionTime << "\t" << proc.waitingTime << "\t" << proc.turnaroundTime << "\n";
        totalWT += proc.waitingTime;
        totalTAT += proc.turnaroundTime;
    }

    cout << fixed << setprecision(2);
    cout << "\nAverage Waiting Time: " << totalWT / n;
    cout << "\nAverage Turnaround Time: " << totalTAT / n << "\n";

    printGanttChart(ganttChart);

    return 0;
}
