#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int r, c, n;
    cout << "Input row & column number: ";
    cin >> n;
    for (r = 1; r <= n; r++)
    {
        for (c = 1; c <= n; c++)
        {
            if (c == 1 ||c == n|| r == n || r == 1)
            {
                cout << "*";
            }
            else
            {
                printf(" ");
            }
        }
        cout << endl;
    }
    getch();
}
/*
Input row & column number: 4
****
*  *
*  *
****
*/
