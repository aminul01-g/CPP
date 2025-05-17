#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n, r, c;
    cout << "Input the row & colum : " << endl;
    cin >> n;
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            cout << r % 2 << " ";
        }
        cout << endl;
    }

    getch();
}

/*
input: 4
output: 1
        0 0
        1 1 1 
        0 0 0 0
*/
