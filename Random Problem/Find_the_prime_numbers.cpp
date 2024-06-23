#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{
    int sn, en, n, c = 0,np=0,sum=0;
    cout<<"Input the starting number: ";
    cin>>sn;
    cout<<"Input the ending number: ";
    cin>>en;
    cout<<"Prime numbers: "<<endl;
   for ( n = sn; n <= en; n++)
   {
       c = 0;
       if (n <= 1)
    {
        c++;
    }

    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                c++;
                break;
            }
        }
    }

    if (c == 0)
    {
        cout << n << " ";
        sum+=n;
        np++;
    }
   }
   cout<<endl;
   cout<<"Total prime numbers: "<<np;
   cout<<endl;
   cout<<"Sum of prime number: "<<sum;
   cout<<endl;
    getch();
}
