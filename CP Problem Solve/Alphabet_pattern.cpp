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
            cout << char(c+64) << " ";
        }
        cout << endl;
    }

    getch();
}

/*
intput: 4
output: A
        A B
        A B C
        A B C D
*/
