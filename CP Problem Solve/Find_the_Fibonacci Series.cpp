#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
    int n,n1,n2,fibo;
    cout<<"Input 1st number: "<<endl;
    cin>>n1;
    cout<<"Input 2nd number: "<<endl;
    cin>>n2;
    cout<<"Input the ending number of the series: "<<endl;
    cin>>n;
    cout<<"Fibonacci series : "<<endl;
    for (int i = 0; i <=n; i++)
    {
        fibo = n1 + n2;
        n1 = n2;
        n2 = fibo;
        cout<<fibo<<" "<<endl;
    }
    

    getch();
}
