#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void CLOOK(vector<int>& requests, int head) {
    vector<int> left, right, seek_sequence;
    int seek_count = 0;

    for (int req : requests) {
        if (req < head)
            left.push_back(req);
        else if (req > head)
            right.push_back(req);
    }

    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    cout << "\nSeek Calculations:\n";

    // First, service requests on the right
    for (int i = 0; i < right.size(); i++) {
        int cur_track = right[i];
        int distance = abs(cur_track - head);
        cout << "Move from " << head << " to " << cur_track << " (Seek: " << distance << ")\n";
        seek_sequence.push_back(cur_track);
        seek_count += distance;
        head = cur_track;
    }

    // Jump to the lowest track on the left
    if (!left.empty()) {
        int jump_distance = abs(head - left[0]);
        seek_count += jump_distance;
        cout << "Jump from " << head << " to " << left[0] << " (Seek: " << jump_distance << ")\n";
        head = left[0];

        // Then service the remaining left tracks
        for (int i = 0; i < left.size(); i++) {
            int cur_track = left[i];
            int distance = abs(cur_track - head);
            cout << "Move from " << head << " to " << cur_track << " (Seek: " << distance << ")\n";
            seek_sequence.push_back(cur_track);
            seek_count += distance;
            head = cur_track;
        }
    }

    cout << "\nTotal number of seek operations = " << seek_count << endl;
    cout << "Seek Sequence:\n";
    for (int track : seek_sequence)
        cout << track << " ";
    cout << endl;
}

int main() {
    int n, head;
    cout << "Enter number of disk requests: ";
    cin >> n;

    vector<int> requests(n);
    cout << "Enter the request sequence: ";
    for (int i = 0; i < n; i++) {
        cin >> requests[i];
    }

    cout << "Enter initial head position: ";
    cin >> head;

    cout << "Initial position of head: " << head << endl;

    CLOOK(requests, head);

    return 0;
}
