#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int s, r, c;
    cout << "Input size of matrix: ";
    cin >> s;
    int a[s][s], tran[s][s];
    cout << "Input 1st matrix elemetns: " << endl;
    for (r = 0; r < s; r++)
    {

        for (c = 0; c < s; c++)
        {
            cout << "Input a[" << r << "]" << "[" << c << "]" << " = ";
            cin >> a[r][c];
        }
    }
    cout << "Output: " << endl;
    for (r = 0; r < s; r++)
    {
        for (c = 0; c < s; c++)
        {
            cout << a[r][c] << " ";
        }
        cout << endl;
    }
    cout << "Transpose Matrix: " << endl;
    for (c = 0; c < s; c++)
    {
        for (r = 0; r < s; r++)
        {
            cout << a[r][c] << " ";
        }
        cout << endl;
    }

    getch();
}

/*

Input size of matrix: 2
Input 1st matrix elemetns:
Input a[0][0] = 1
Input a[0][1] = 2
Input a[1][0] = 3
Input a[1][1] = 4
Output:
1 2
3 4
Transpose Matrix:
1 3
2 4

*/
