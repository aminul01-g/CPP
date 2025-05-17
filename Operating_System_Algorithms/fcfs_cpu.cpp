#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Process {
    int id;
    int arrivalTime;
    int burstTime;
    int startTime;
    int completionTime;
    int waitingTime;
    int turnaroundTime;
};

// Comparator to sort processes by arrival time
bool compareByArrival(Process a, Process b) {
    return a.arrivalTime < b.arrivalTime;
}

void calculateTimes(vector<Process>& processes, bool useArrivalTime) {
    int currentTime = 0;

    for (int i = 0; i < processes.size(); i++) {
        if (useArrivalTime)
            currentTime = max(currentTime, processes[i].arrivalTime);

        processes[i].startTime = currentTime;
        processes[i].completionTime = currentTime + processes[i].burstTime;
        processes[i].turnaroundTime = processes[i].completionTime - processes[i].arrivalTime;
        processes[i].waitingTime = processes[i].startTime - processes[i].arrivalTime;

        currentTime = processes[i].completionTime;
    }
}

void displayResults(const vector<Process>& processes) {
    float totalWT = 0, totalTAT = 0;
    cout << "\nProcess\tAT\tBT\tST\tCT\tWT\tTAT\n";
    for (const auto& p : processes) {
        cout << "P" << p.id << "\t" << p.arrivalTime << "\t" << p.burstTime
             << "\t" << p.startTime << "\t" << p.completionTime
             << "\t" << p.waitingTime << "\t" << p.turnaroundTime << "\n";
        totalWT += p.waitingTime;
        totalTAT += p.turnaroundTime;
    }

    cout << "\nAverage Waiting Time: " << totalWT / processes.size();
    cout << "\nAverage Turnaround Time: " << totalTAT / processes.size() << "\n";

    // Gantt Chart
    cout << "\nGantt Chart:\n|";
    for (const auto& p : processes) {
        cout << " P" << p.id << " |";
    }
    cout << "\n" << processes[0].startTime;
    for (const auto& p : processes) {
        cout << "\t" << p.completionTime;
    }
    cout << "\n";
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

    // WITH ARRIVAL TIME
    sort(processes.begin(), processes.end(), compareByArrival);
    cout << "\n--- FCFS WITH ARRIVAL TIME ---";
    calculateTimes(processes, true);
    displayResults(processes);

    // WITHOUT ARRIVAL TIME (Assume all AT = 0)
    for (auto& p : processes) {
        p.arrivalTime = 0;
    }
    cout << "\n--- FCFS WITHOUT ARRIVAL TIME (AT=0) ---";
    calculateTimes(processes, false);
    displayResults(processes);

    return 0;
}
