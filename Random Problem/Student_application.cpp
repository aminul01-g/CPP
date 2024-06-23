#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int n, i, sum = 0;
    cout << "Input number of student: ";
    cin >> n;
    int marks[n];
    cout << "Input students marks: ";
    for (i = 0; i < n; i++)
    {
        cin >> marks[i];
    }
    cout << "Output of sutdents marks: ";
    for (i = 0; i < n; i++)
    {
        sum += marks[i];
        cout << marks[i] << " ";
    }
    float avg = (float)sum / n;
    cout << endl
         << "Avarage = " << avg;
    cout << endl
         << "Sum = " << sum;

    int max = marks[0];
    for (i = 1; i < n; i++)
    {
        if (max < marks[i])
        {
            max = marks[i];
        }
    }
    cout << endl
         << "Maximum mark: " << max;

    int min = marks[0];
    for (i = 1; i < n; i++)
    {
        if (min > marks[0])
        {
            min = marks[i];
        }
    }
    cout<<endl<<"Minimum mark: "<<min;
    getch();
}

/*
Input number of student: 3
Input students marks: 10
11
12
Output of sutdents marks: 10 11 12 
Avarage = 11
Sum = 33
Maximum mark: 12
Minimum mark: 10
*/
