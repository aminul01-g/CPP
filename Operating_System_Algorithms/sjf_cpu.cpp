#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

struct Process {
    int id;
    int arrivalTime;
    int burstTime;
    int startTime;
    int completionTime;
    int waitingTime;
    int turnaroundTime;
    bool completed = false;
};

// Comparator for sorting by arrival time
bool arrivalCmp(Process a, Process b) {
    return a.arrivalTime < b.arrivalTime;
}

// Main logic for SJF (Non-Preemptive)
void scheduleProcesses(vector<Process>& processes) {
    int n = processes.size();
    int currentTime = 0, completed = 0;
    float totalWT = 0, totalTAT = 0;

    vector<int> gantt;

    while (completed != n) {
        int idx = -1;
        int minBT = INT_MAX;

        for (int i = 0; i < n; i++) {
            if (processes[i].arrivalTime <= currentTime && !processes[i].completed) {
                if (processes[i].burstTime < minBT) {
                    minBT = processes[i].burstTime;
                    idx = i;
                }
            }
        }

        if (idx != -1) {
            processes[idx].startTime = currentTime;
            processes[idx].completionTime = currentTime + processes[idx].burstTime;
            processes[idx].turnaroundTime = processes[idx].completionTime - processes[idx].arrivalTime;
            processes[idx].waitingTime = processes[idx].turnaroundTime - processes[idx].burstTime;

            currentTime = processes[idx].completionTime;
            processes[idx].completed = true;
            completed++;
            gantt.push_back(processes[idx].id);

            totalWT += processes[idx].waitingTime;
            totalTAT += processes[idx].turnaroundTime;
        } else {
            currentTime++;  // Idle time
        }
    }

    // Output
    cout << "\nP\tAT\tBT\tST\tCT\tWT\tTAT\n";
    for (const auto& p : processes) {
        cout << "P" << p.id << "\t" << p.arrivalTime << "\t" << p.burstTime
             << "\t" << p.startTime << "\t" << p.completionTime << "\t"
             << p.waitingTime << "\t" << p.turnaroundTime << "\n";
    }

    cout << "\nAverage Waiting Time: " << totalWT / n;
    cout << "\nAverage Turnaround Time: " << totalTAT / n;

    // Gantt Chart
    cout << "\n\nGantt Chart:\n|";
    for (int id : gantt) {
        cout << " P" << id << " |";
    }
    cout << "\n";
    currentTime = 0;
    for (int id : gantt) {
        for (auto& p : processes) {
            if (p.id == id) {
                cout << currentTime << "\t";
                currentTime = p.completionTime;
                break;
            }
        }
    }
    cout << currentTime << "\n";
}

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<Process> processes(n);
    for (int i = 0; i < n; i++) {
        processes[i].id = i + 1;
        cout << "Enter Arrival Time for Process " << i + 1 << ": ";
        cin >> processes[i].arrivalTime;
        cout << "Enter Burst Time for Process " << i + 1 << ": ";
        cin >> processes[i].burstTime;
    }

    sort(processes.begin(), processes.end(), arrivalCmp);
    scheduleProcesses(processes);

    return 0;
}
