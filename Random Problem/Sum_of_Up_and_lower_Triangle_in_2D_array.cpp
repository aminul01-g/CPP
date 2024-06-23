#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int s, r, c;
    cout<<"Input size of matrix: ";
    cin>>s;
    int a[s][s], tran[s][s], upsum = 0, lowsum = 0;
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
    cout<<"Doagonal Matrix: "<<endl;
     for(r = 0; r < s;  r++)
    {
        for(c = 0; c < s; c++)
        {
            if(r < c)
            {
                upsum += a[r][c];
            }
            if(r > c)
            {
                lowsum += a[r][c];
            }
        }
    }
    cout<<"Sum of upper traiangles = "<<upsum<<endl;
    cout<<"Sum of lower traiangles = "<<lowsum;
    getch();
}

/*

Input size of matrix: 3
Input 1st matrix elemetns: 
Input a[0][0] = 1
Input a[0][1] = 2
Input a[0][2] = 3
Input a[1][0] = 4
Input a[1][1] = 5
Input a[1][2] = 6
Input a[2][0] = 7
Input a[2][1] = 7
Input a[2][2] = 8
Output:
1 2 3
4 5 6
7 7 8
Doagonal Matrix:
Sum of upper traiangles = 11
Sum of lower traiangles = 18
*/
