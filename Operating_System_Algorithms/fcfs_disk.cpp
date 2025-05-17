#include <iostream>
#include <cmath>
using namespace std;

void FCFS(int arr[], int n, int head)
{
    int seek_count = 0;
    int distance, cur_track;

    cout << "\nSeek Calculations:\n";

    for (int i = 0; i < n; i++) {
        cur_track = arr[i];

        // calculate absolute distance
        distance = abs(cur_track - head);

        // display movement
        cout << "Move from " << head << " to " << cur_track
             << " (Seek: " << distance << ")\n";

        // increase the total count
        seek_count += distance;

        // accessed track is now new head
        head = cur_track;
    }

    cout << "\nTotal number of seek operations = " << seek_count << endl;

    // Seek sequence would be the same as request array
    cout << "Seek Sequence is:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Driver code
int main()
{
    int n;
    cout << "Enter number of disk requests: ";
    cin >> n;

    int arr[n];
    cout << "Enter the request sequence: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int head;
    cout << "Enter initial head position: ";
    cin >> head;

    cout << "\nInitial position of head: " << head << endl;
    FCFS(arr, n, head);

    return 0;
}
