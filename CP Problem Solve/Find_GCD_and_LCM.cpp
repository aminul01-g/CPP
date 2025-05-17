#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
    int n1,n2,num1,num2,rem,GCD,LCM;
    cout<<"Input number 1 : "<<endl;
    cin>>n1;
    cout<<"Input number2: "<<endl;
    cin>>n2;
    num1 = n1,num2=n2; 
    while (n2!=0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    GCD = n1;
    LCM = (num1*num2)/GCD;
    cout<<"GCD = "<<GCD<<endl;
    cout<<"LCM = "<<LCM;


    getch();
}
