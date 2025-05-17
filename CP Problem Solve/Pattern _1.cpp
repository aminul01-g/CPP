#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n, r, c;
    cout << "Input row and colum amount: " << endl;
    cin >> n;
    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= r; c++)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    getch();
}

/*
Input: 4
Output: 1
        1 2
        1 2 3
        1 2 3 4
*/
