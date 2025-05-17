#include <iostream>
using namespace std;
int binaryToDecimal(int n) // Binary to Decimal
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 2;
        n /= 10;
    }
    return ans;
}
int octalToDecimal(int n) // Octal to Decimal
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 8;
        n /= 10;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << binaryToDecimal(n) << endl;
    cout << octalToDecimal(n) << endl;
    return 0;
}
