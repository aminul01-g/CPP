#include <iostream>
#include <cmath>
using namespace std;

void calculateDifference(int request[], int head, int diff[][2], int n) {
    for(int i = 0; i < n; i++) {
        diff[i][0] = abs(head - request[i]);
    }
}

int findMin(int diff[][2], int n) {
    int index = -1;
    int minimum = 1e9;

    for(int i = 0; i < n; i++) {
        if (!diff[i][1] && diff[i][0] < minimum) {
            minimum = diff[i][0];
            index = i;
        }
    }
    return index;
}

void SSTF(int request[], int head, int n) {
    if (n == 0) return;

    int diff[n][2] = {0};  // [0]=distance, [1]=accessed flag
    int seek_count = 0;
    int seek_sequence[n + 1];

    cout << "\nSeek Calculations:\n";

    for(int i = 0; i < n; i++) {
        seek_sequence[i] = head;
        calculateDifference(request, head, diff, n);
        int index = findMin(diff, n);
        diff[index][1] = 1;

        int distance = diff[index][0];
        cout << "Move from " << head << " to " << request[index]
             << " (Seek: " << distance << ")\n";

        seek_count += distance;
        head = request[index];
    }
    seek_sequence[n] = head;

    cout << "\nTotal number of seek operations = " << seek_count << endl;
    cout << "Seek Sequence:\n";
    for(int i = 0; i <= n; i++) {
        cout << seek_sequence[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of disk requests: ";
    cin >> n;

    int request[n];
    cout << "Enter the request sequence: ";
    for(int i = 0; i < n; i++) {
        cin >> request[i];
    }

    int head;
    cout << "Enter initial head position: ";
    cin >> head;

    cout << "Initial head position: " << head << endl;

    SSTF(request, head, n);

    return 0;
}
