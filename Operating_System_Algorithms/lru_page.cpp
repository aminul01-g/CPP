#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <iomanip>
#include <climits>
using namespace std;

// Function to find page faults using LRU and display the chart
int pageFaultsLRU(int pages[], int n, int capacity) {
    unordered_set<int> s;                 // Store pages in memory
    unordered_map<int, int> indexes;      // Store last used index
    int page_faults = 0;

    cout << "\nPage Replacement Chart (LRU):\n";
    cout << left << setw(10) << "Page" << setw(20) << "Frame State" << "Result\n";
    cout << "---------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        int page = pages[i];

        if (s.size() < capacity) {
            if (s.find(page) == s.end()) {
                s.insert(page);
                page_faults++;
                cout << left << setw(10) << page;

                // Print frame state
                for (int p : s)
                    cout << p << " ";
                cout << setw(20 - s.size() * 2) << " " << "Miss\n";
            } else {
                cout << left << setw(10) << page;
                for (int p : s)
                    cout << p << " ";
                cout << setw(20 - s.size() * 2) << " " << "Hit\n";
            }
            indexes[page] = i;
        } else {
            if (s.find(page) == s.end()) {
                int lru = INT_MAX, val = -1;
                for (auto it = s.begin(); it != s.end(); ++it) {
                    if (indexes[*it] < lru) {
                        lru = indexes[*it];
                        val = *it;
                    }
                }
                s.erase(val);
                s.insert(page);
                page_faults++;

                cout << left << setw(10) << page;
                for (int p : s)
                    cout << p << " ";
                cout << setw(20 - s.size() * 2) << " " << "Miss\n";
            } else {
                cout << left << setw(10) << page;
                for (int p : s)
                    cout << p << " ";
                cout << setw(20 - s.size() * 2) << " " << "Hit\n";
            }
            indexes[page] = i;
        }
    }

    cout << "\nTotal Page Faults: " << page_faults << endl;
    return page_faults;
}

// Driver code
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

    pageFaultsLRU(pages, n, capacity);

    return 0;
}
