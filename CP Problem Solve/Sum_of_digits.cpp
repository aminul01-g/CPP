#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
    int num,rem,temp,sum=0;
    cout<<"Input number: "<<endl;
    cin>>num;
    temp = num;
    while (temp!=0) 
    {
        rem = temp%10;
        sum += rem;
        temp  =  temp/10;
    }
    cout<<"Sum fo digit: "<<sum<<endl;    
    getch();
}
