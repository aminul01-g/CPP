#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    int n, s, i;
    cout << "Input the size of array = ";
    cin >> s;
    int fibo[s];
    cout << "Input the number of terms: ";
    cin >> n;
    fibo[0] = 0;
    fibo[1] = 1;
    cout << "Fibonacci series : ";
    for (i = 2; i < n; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        cout << fibo[i]<<" ";
    }
    getch();
}

/*
Input the size of array = 30
Input the number of terms: 10
Fibonacci series : 1 2 3 5 8 13 21 34 
*/
