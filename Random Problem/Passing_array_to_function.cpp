#include<iostream>
#include<conio.h>
using namespace std;
int display(int num[],int size)
{
    for(int i = 0; i <= size; i++)
    {
        cout<<num[i]<<" ";
    } 
}
int main()
{
    int num[5] = {1,2,3,4,5} ;
    display(num, 5);
    getch();
}


/*
1 2 3 4 5 
*/
