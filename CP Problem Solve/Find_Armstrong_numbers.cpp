#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{
    int sn, en, rem, sum = 0, temp;
    cout << "Input starting number: " << endl;
    cin >> sn;
    cout << "Input ending number: " << endl;
    cin >> en;
    for (int i = sn; i < en; i++)
    {
        temp = i;
        sum = 0;
        while (temp != 0)
        {
            rem = temp % 10;
            sum += pow(rem, 3);
            temp /= 10;
        }
        if (i == sum)
        {
            cout << i << " is armstrong" << endl;
        }
    }

    getch();
}
