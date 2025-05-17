#include <iostream>
#include <unordered_set>
#include <queue>
#include <vector>
#include <iomanip>
using namespace std;

// Function to find page faults using FIFO and print chart
int pageFaultsFIFO(int pages[], int n, int capacity) {
    unordered_set<int> s;
    queue<int> indexes;
    int page_faults = 0;

    cout << "\nPage Replacement Chart:\n";
    cout << left << setw(10) << "Page" << setw(20) << "Frame State" << "Result\n";
    cout << "---------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        int page = pages[i];

        // If page is not already present
        if (s.find(page) == s.end()) {
            page_faults++;

            // If there's space in memory
            if (s.size() < capacity) {
                s.insert(page);
                indexes.push(page);
            } else {
                // Remove the oldest page
                int val = indexes.front();
                indexes.pop();
                s.erase(val);
                s.insert(page);
                indexes.push(page);
            }

            // Print miss state
            queue<int> temp = indexes;
            vector<int> state;
            while (!temp.empty()) {
                state.push_back(temp.front());
                temp.pop();
            }

            cout << left << setw(10) << page;
            for (int val : state)
                cout << val << " ";
            cout << setw(20 - state.size() * 2) << " " << "Miss\n";
        } else {
            // Page hit
            queue<int> temp = indexes;
            vector<int> state;
            while (!temp.empty()) {
                state.push_back(temp.front());
                temp.pop();
            }

            cout << left << setw(10) << page;
            for (int val : state)
                cout << val << " ";
            cout << setw(20 - state.size() * 2) << " " << "Hit\n";
        }
    }

    cout << "\nTotal Page Faults: " << page_faults << endl;
    return page_faults;
}

// Main function
int main() {
    int n;
    cout << "Enter number of page references: ";
    cin >> n;

    int pages[n];
    cout << "Enter the page reference string: ";
    for (int i = 0; i < n; i++) {
        cin >> pages[i];
    }

    int capacity;
    cout << "Enter frame capacity: ";
    cin >> capacity;

    pageFaultsFIFO(pages, n, capacity);

    return 0;
}
