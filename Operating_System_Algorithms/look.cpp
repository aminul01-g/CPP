#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void LOOK(vector<int>& requests, int head, string direction) {
    vector<int> left, right, seek_sequence;
    int seek_count = 0;

    // Divide requests into left and right of head
    for (int req : requests) {
        if (req < head)
            left.push_back(req);
        else if (req > head)
            right.push_back(req);
    }

    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    cout << "\nSeek Calculations:\n";

    int run = 2;
    while (run--) {
        if (direction == "left") {
            for (int i = left.size() - 1; i >= 0; i--) {
                int cur_track = left[i];
                int distance = abs(head - cur_track);
                cout << "Move from " << head << " to " << cur_track << " (Seek: " << distance << ")\n";
                seek_sequence.push_back(cur_track);
                seek_count += distance;
                head = cur_track;
            }
            direction = "right";
        } else if (direction == "right") {
            for (int i = 0; i < right.size(); i++) {
                int cur_track = right[i];
                int distance = abs(head - cur_track);
                cout << "Move from " << head << " to " << cur_track << " (Seek: " << distance << ")\n";
                seek_sequence.push_back(cur_track);
                seek_count += distance;
                head = cur_track;
            }
            direction = "left";
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
    string direction;

    cout << "Enter number of disk requests: ";
    cin >> n;

    vector<int> requests(n);
    cout << "Enter the request sequence: ";
    for (int i = 0; i < n; i++) {
        cin >> requests[i];
    }

    cout << "Enter initial head position: ";
    cin >> head;

    cout << "Enter initial direction (left or right): ";
    cin >> direction;

    cout << "Initial position of head: " << head << endl;
    LOOK(requests, head, direction);

    return 0;
}
