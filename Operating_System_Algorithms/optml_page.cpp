#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

// Function to check if a page is in the frame
bool search(int key, const vector<int>& fr) {
    for (int val : fr)
        if (val == key)
            return true;
    return false;
}

// Function to predict the frame to replace
int predict(int pg[], vector<int>& fr, int pn, int index) {
    int res = -1, farthest = index;
    for (int i = 0; i < fr.size(); i++) {
        int j;
        for (j = index; j < pn; j++) {
            if (fr[i] == pg[j]) {
                if (j > farthest) {
                    farthest = j;
                    res = i;
                }
                break;
            }
        }

        if (j == pn)
            return i;
    }
    return (res == -1) ? 0 : res;
}

// Main optimal page replacement logic
void optimalPage(int pg[], int pn, int fn) {
    vector<int> fr;
    int hits = 0;

    cout << "\nOptimal Page Replacement Chart:\n";
    cout << left << setw(10) << "Page" << setw(20) << "Frame State" << "Result\n";
    cout << "-----------------------------------------------\n";

    for (int i = 0; i < pn; i++) {
        int current = pg[i];

        if (search(current, fr)) {
            hits++;
            cout << left << setw(10) << current;
            for (int f : fr) cout << f << " ";
            cout << setw(20 - 2 * fr.size()) << " " << "Hit\n";
        } else {
            if (fr.size() < fn) {
                fr.push_back(current);
            } else {
                int j = predict(pg, fr, pn, i + 1);
                fr[j] = current;
            }

            cout << left << setw(10) << current;
            for (int f : fr) cout << f << " ";
            cout << setw(20 - 2 * fr.size()) << " " << "Miss\n";
        }
    }

    int misses = pn - hits;
    cout << "\nTotal Hits: " << hits << endl;
    cout << "Total Misses (Page Faults): " << misses << endl;
}

// Driver function with user input
int main() {
    int n;
    cout << "Enter number of page references: ";
    cin >> n;

    int* pages = new int[n];
    cout << "Enter the page reference string: ";
    for (int i = 0; i < n; i++) {
        cin >> pages[i];
    }

    int capacity;
    cout << "Enter frame capacity: ";
    cin >> capacity;

    optimalPage(pages, n, capacity);

    delete[] pages;
    return 0;
}
