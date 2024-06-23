#include<bits/stdc++.h>
using namespace std;
class X
{
    int a;
    public:
    X(){a = 0;}
    X(int a){this -> a = a;}
    void show(){cout << a << endl;}
    X operator +(int val)
    {
        X temp;
        temp.a = a + val;
        return temp;
    }
    X operator *(X ob)
    {
        X temp;
        temp.a = a * ob.a;
        return temp;
    }
};
int main()
{
    X ob2(10);
    X ob3(10);
    X ob1 = (ob2 + 2) * ob2;
    ob1.show();
    return 0;
}
