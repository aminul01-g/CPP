#include <iostream>
#include <queue>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

struct Process {
    int pid, at, bt, rt, ct, wt, tat;
};

int main() {
    int n, quantum;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<Process> p(n);
    for (int i = 0; i < n; ++i) {
        p[i].pid = i + 1;
        cout << "Enter Arrival Time and Burst Time for P" << p[i].pid << ": ";
        cin >> p[i].at >> p[i].bt;
        p[i].rt = p[i].bt; // Initialize remaining time
    }

    cout << "Enter Time Quantum: ";
    cin >> quantum;

    int time = 0, completed = 0;
    queue<int> q;
    vector<bool> inQueue(n, false);
    vector<int> gantt;

    // Sort by arrival time initially
    sort(p.begin(), p.end(), [](Process a, Process b) {
        return a.at < b.at;
    });

    q.push(0);
    inQueue[0] = true;

    while (completed < n) {
        if (q.empty()) {
            // If CPU is idle
            gantt.push_back(-1);
            time++;
            for (int i = 0; i < n; i++) {
                if (p[i].at <= time && p[i].rt > 0 && !inQueue[i]) {
                    q.push(i);
                    inQueue[i] = true;
                }
            }
            continue;
        }

        int idx = q.front();
        q.pop();

        gantt.push_back(p[idx].pid);

        int execTime = min(quantum, p[idx].rt);
        time += execTime;
        p[idx].rt -= execTime;

        // Push new arrivals during this exec time
        for (int i = 0; i < n; i++) {
            if (p[i].at > time - execTime && p[i].at <= time && p[i].rt > 0 && !inQueue[i]) {
                q.push(i);
                inQueue[i] = true;
            }
        }

        if (p[idx].rt > 0) {
            q.push(idx);
        } else {
            p[idx].ct = time;
            p[idx].tat = p[idx].ct - p[idx].at;
            p[idx].wt = p[idx].tat - p[idx].bt;
            completed++;
        }
    }

    double total_wt = 0, total_tat = 0;
    cout << "\nPN\tAT\tBT\tCT\tWT\tTAT\n";
    for (auto &proc : p) {
        total_wt += proc.wt;
        total_tat += proc.tat;
        cout << "P" << proc.pid << "\t" << proc.at << "\t" << proc.bt << "\t" << proc.ct
             << "\t" << proc.wt << "\t" << proc.tat << "\n";
    }

    cout << fixed << setprecision(2);
    cout << "\nAverage Waiting Time = " << total_wt / n;
    cout << "\nAverage Turnaround Time = " << total_tat / n;

    cout << "\n\nGantt Chart:\n| ";
    int prev = -2;
    for (int pid : gantt) {
        if (pid != prev) {
            if (pid == -1) cout << "IDLE | ";
            else cout << "P" << pid << " | ";
        }
        prev = pid;
    }
    cout << "\n";

    return 0;
}
