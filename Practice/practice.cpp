#include<bits/stdc++.h>
using namespace std;
int add (int arr[], int s)
{
    int sum;
    sum = 0;
    for(int i = 0; i < s; i++)
    {
        sum += arr[i];
        return sum;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum;
    sum = add(arr,n);
    cout << sum << endl;
}