#include <bits/stdc++.h>
using namespace std;
template <typename X>
X findMaximum(X arr[], int s)
{
    X max = 0;
    for (int i = 0; i < s; i++)
    {

        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int s;
    cin >> s;
    double arr[s];
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
    // cout << findMaximum <int> (arr, s) << endl;
    cout << findMaximum<double>(arr, s) << endl;
    // cout << findMaximum <char> (arr, s) << endl;

    return 0;
}
