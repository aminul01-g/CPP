#include<iostream>
#include<conio.h>
using namespace std;
int fibo(int n1, int n2)
{
    if ( n1 <= 1)
    {
        return n1;
    }
    else{
        return fibo(n1 -1,n2) + fibo(n1 -2,n2);
    }
}
int main()
{
    int n1, n2;
    cout<<"Input starting number & ending number: ";
    cin>>n1 >> n2;
    cout<<"Fibonacci seris : "<<endl;
    for(int i = n1; i <= n2; i++)
    {
    int Fibonacci = fibo(i, i- 1);
    cout<<Fibonacci<<" ";
    }
    getch();
}

/*
Input starting number & ending number: 1
7
Fibonacci seris : 
1 1 2 3 5 8 13 
*/
