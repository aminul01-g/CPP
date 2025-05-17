#include <iostream>
#include <vector>
using namespace std;

// Function to calculate Need Matrix
void calculateNeed(vector<vector<int>>& need, const vector<vector<int>>& maxm, const vector<vector<int>>& allot, int P, int R) {
    for (int i = 0; i < P; i++)
        for (int j = 0; j < R; j++)
            need[i][j] = maxm[i][j] - allot[i][j];
}

// Function to check if the system is in a safe state
bool isSafe(const vector<int>& avail, const vector<vector<int>>& maxm, const vector<vector<int>>& allot, int P, int R) {
    vector<vector<int>> need(P, vector<int>(R));
    calculateNeed(need, maxm, allot, P, R);

    vector<bool> finish(P, false);
    vector<int> safeSeq(P);
    vector<int> work = avail;

    int count = 0;
    while (count < P) {
        bool found = false;
        for (int p = 0; p < P; p++) {
            if (!finish[p]) {
                int j;
                for (j = 0; j < R; j++)
                    if (need[p][j] > work[j])
                        break;

                if (j == R) {
                    for (int k = 0; k < R; k++)
                        work[k] += allot[p][k];

                    safeSeq[count++] = p;
                    finish[p] = true;
                    found = true;
                }
            }
        }

        if (!found) {
            cout << "System is not in a safe state." << endl;
            return false;
        }
    }

    cout << "System is in a safe state.\nSafe sequence is: ";
    for (int i = 0; i < P; i++)
        cout << safeSeq[i] << " ";
    cout << endl;
    return true;
}

int main() {
    int P, R;
    cout << "Enter number of processes: ";
    cin >> P;
    cout << "Enter number of resources: ";
    cin >> R;

    vector<vector<int>> maxm(P, vector<int>(R));
    vector<vector<int>> allot(P, vector<int>(R));
    vector<int> avail(R);

    cout << "Enter the allocation matrix (" << P << "x" << R << "):\n";
    for (int i = 0; i < P; i++)
        for (int j = 0; j < R; j++)
            cin >> allot[i][j];

    cout << "Enter the maximum matrix (" << P << "x" << R << "):\n";
    for (int i = 0; i < P; i++)
        for (int j = 0; j < R; j++)
            cin >> maxm[i][j];

    cout << "Enter available resources (" << R << " values): ";
    for (int i = 0; i < R; i++)
        cin >> avail[i];

    isSafe(avail, maxm, allot, P, R);

    return 0;
}
