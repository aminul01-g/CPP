#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int r, c, n;
    cout<<"Input row & column number: ";
    cin>>n;
    for(r = 1; r <= n; r++)
    {
        for(c = 1; c <= n - r; c++)
        {
            cout<<" ";
        }
        for(c = 1; c <= r; c++)
        {
            cout<<c;
        }
        cout<<endl;
    }
    for(r = n-1; r >= 1; r--)
    {
        for(c = 1; c <= n-r; c++)
        {
            cout<<" ";
        }
        for(c = 1; c <= r; c++)
        {
            cout<<c;
        }
        cout<<endl;
    }

    getch();
}

/*
Input row & column number: 4
   1
  12
 123
1234
 123
  12
   1
*/
