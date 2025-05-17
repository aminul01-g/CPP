#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Process {
    int pid, at, bt, priority;
    int ct, wt, tat, start;
};

bool sortByArrival(Process a, Process b) {
    return a.at < b.at;
}

bool sortByPriority(Process a, Process b) {
    if (a.priority == b.priority)
        return a.at < b.at;
    return a.priority > b.priority; // higher number = higher priority
}

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<Process> p(n);
    for (int i = 0; i < n; ++i) {
        p[i].pid = i + 1;
        cout << "Enter Arrival Time, Burst Time, and Priority for P" << p[i].pid << ": ";
        cin >> p[i].at >> p[i].bt >> p[i].priority;
    }

    sort(p.begin(), p.end(), sortByArrival);

    int time = 0, completed = 0;
    vector<int> gantt;

    while (completed < n) {
        int idx = -1;
        int maxPriority = -1;

        for (int i = 0; i < n; i++) {
            if (p[i].at <= time && p[i].bt > 0 && p[i].priority > maxPriority) {
                maxPriority = p[i].priority;
                idx = i;
            }
        }

        if (idx != -1) {
            p[idx].start = time;
            time += p[idx].bt;
            p[idx].ct = time;
            p[idx].tat = p[idx].ct - p[idx].at;
            p[idx].wt = p[idx].tat - p[idx].bt;
            completed++;
            gantt.push_back(p[idx].pid);
            p[idx].bt = 0; // mark as done
        } else {
            gantt.push_back(0); // CPU Idle
            time++;
        }
    }

    double total_wt = 0, total_tat = 0;
    cout << "\nP\tAT\tBT\tCT\tWT\tTAT\n";
    for (auto &proc : p) {
        total_wt += proc.wt;
        total_tat += proc.tat;
        cout << "P" << proc.pid << "\t" << proc.at << "\t" << proc.ct - proc.tat << "\t"
             << proc.ct << "\t" << proc.wt << "\t" << proc.tat << "\n";
    }

    cout << fixed << setprecision(2);
    cout << "\nAverage Waiting Time = " << total_wt / n;
    cout << "\nAverage Turnaround Time = " << total_tat / n;

    cout << "\n\nGantt Chart:\n| ";
    int prev = -1;
    for (int pid : gantt) {
        if (pid != prev) cout << (pid == 0 ? "IDLE" : ("P" + to_string(pid))) << " | ";
        prev = pid;
    }
    cout << "\n";

    return 0;
}
