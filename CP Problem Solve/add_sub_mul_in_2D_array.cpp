#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int s, r, c;
    cout<<"Input size of matrix: ";
    cin>>s;
    int a[s][s], b[s][s], add[s][s], sub[s][s], mul[s][s];
    cout<<"Input 1st matrix elemetns: "<<endl;
    for(r = 0; r < s; r++)
    {

        for(c = 0; c < s; c++)
        {
            cout<<"Input a["<<r<<"]"<<"["<<c<<"]"<<" = ";
            cin>>a[r][c];
        }
        
    }
    cout<<"Output: "<<endl;
    for(r = 0; r < s; r++)
    {
        for(c = 0; c < s; c++)
        {
            cout<< a[r][c]<<" ";
        }
        cout<<endl;
    }
    cout<<"Input 2nd matrix elements: "<<endl;
    for(r = 0; r < s; r++)
    {
        for(c = 0; c < s; c++)
        {
            cout<<"b["<<r<<"]"<<"["<<c<<"] = ";
            cin>>b[r][c];
        }
    }
    cout<<"Output: "<<endl;
    for(r = 0; r < s; r++)
    {
        for(c = 0; c < s; c++)
        {
            cout<<b[r][c]<<" ";
        }
        cout<<endl;
    }
    cout<<"Addition: "<<endl;
    for(r = 0; r < s; r++)
    {
        for(c = 0; c < s; c++)
        {
            cout<<a[r][c]<<"+"<<b[r][c]<<" = ";
            add[r][c] = a[r][c] + b[r][c];
            cout<<add[r][c]<<endl;
        }
        
    }
    cout<<"Addition Matrix: "<<endl;
       for(r = 0; r < s; r++)
    {
        for(c = 0; c < s; c++)
        {
            cout<<add[r][c]<<" ";
        }
        cout<<endl;
    }
    cout<<"Subtraction: "<<endl;
    for(r = 0; r < s; r++)
    {
        for(c = 0; c < s; c++)
        {
           cout<<a[r][c]<<"-"<<b[r][c]<<" = ";
           sub[r][c] = a[r][c] - b[r][c];
           cout<<sub[r][c]<<endl;
        }
    }
    cout<<"Subtraction Matrix: "<<endl;
    for(r = 0; r < s; r++)
    {
        for(c = 0; c < s; c++)
        {
            cout<<sub[r][c]<<" ";
        }
        cout<<endl;
    }
    cout<<"Multiplication: "<<endl;
    for(r = 0; r < s; r++)
    {
        for(c = 0; c < s; c++)
        {
            cout<<a[r][c]<<" * "<<b[r][c]<<" = ";
             mul[r][c] = a[r][c] * b[r][c];
             cout<<mul[r][c]
                 <<endl;
        }
    }
    cout<<"Mustiplication Matrix: "<<endl;
    for(r = 0; r < s; r++)
    {
        for(c = 0; c < s; c++)
        {
            cout<<mul[r][c]<<" ";
        }
        cout<<endl;
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
Input 2nd matrix elements: 
b[0][0] = 5
b[0][1] = 6
b[1][0] = 7
b[1][1] = 8
Output:
5 6
7 8
Addition:
1+5 = 6
2+6 = 8
3+7 = 10
4+8 = 12
Addition Matrix:
6 8
10 12
Subtraction:
1-5 = -4
2-6 = -4
3-7 = -4
4-8 = -4
Subtraction Matrix:
-4 -4
-4 -4
Multiplication:
1 * 5 = 5
2 * 6 = 12
3 * 7 = 21
4 * 8 = 32
Mustiplication Matrix:
5 12 
21 32
*/
