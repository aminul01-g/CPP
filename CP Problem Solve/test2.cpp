#include <iostream>
#include <string>
using namespace std;

__int128_t factorial(int num) {
    if (num == 0) {
        return 1;
    }
    return num * factorial(num - 1);
}

// Function to convert __int128_t to string for output
string to_string(__int128_t value) {
    string result;
    while (value > 0) {
        result.insert(result.begin(), '0' + (value % 10));
        value /= 10;
    }
    return result.empty() ? "0" : result;
}

int main() {
    int n, r;
    cin >> n >> r;

    __int128_t comp = factorial(n) / (factorial(r) * factorial(n - r));

    cout << to_string(comp) << endl;
    return 0;
}
