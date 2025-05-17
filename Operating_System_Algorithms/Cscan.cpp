#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void CSCAN(vector<int>& requests, int head, int disk_size) {
    vector<int> left, right, seek_sequence;
    int seek_count = 0;

    // Add 0 and end of disk to the request queue
    left.push_back(0);
    right.push_back(disk_size - 1);

    for (int req : requests) {
        if (req < head)
            left.push_back(req);
        else if (req > head)
            right.push_back(req);
    }

    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    cout << "\nSeek Calculations:\n";

    // Service requests on the right of head
    for (int i = 0; i < right.size(); i++) {
        int cur_track = right[i];
        int distance = abs(head - cur_track);
        cout << "Move from " << head << " to " << cur_track << " (Seek: " << distance << ")\n";
        seek_sequence.push_back(cur_track);
        seek_count += distance;
        head = cur_track;
    }

    // Move from last track to 0 (circular move)
    int jump_distance = disk_size - 1;
    cout << "Jump from " << head << " to 0 (Seek: " << jump_distance << ")\n";
    seek_count += jump_distance;
    head = 0;

    // Service remaining requests on the left
    for (int i = 0; i < left.size(); i++) {
        int cur_track = left[i];
        int distance = abs(head - cur_track);
        cout << "Move from " << head << " to " << cur_track << " (Seek: " << distance << ")\n";
        seek_sequence.push_back(cur_track);
        seek_count += distance;
        head = cur_track;
    }

    cout << "\nTotal number of seek operations = " << seek_count << endl;
    cout << "Seek Sequence:\n";
    for (int track : seek_sequence) {
        cout << track << " ";
    }
    cout << endl;
}

int main() {
    int n, head, disk_size;

    cout << "Enter number of disk requests: ";
    cin >> n;

    vector<int> requests(n);
    cout << "Enter the request sequence: ";
    for (int i = 0; i < n; i++) {
        cin >> requests[i];
    }

    cout << "Enter initial head position: ";
    cin >> head;

    cout << "Enter total disk size (e.g., 200): ";
    cin >> disk_size;

    CSCAN(requests, head, disk_size);

    return 0;
}
