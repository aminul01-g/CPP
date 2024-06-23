#include <bits/stdc++.h>
using namespace std;
class X
{
    int h;

public:
    X()
    {
        h = 0;
    }
    X(int h)
    {
        this->h = h;
    }
    X operator*(X ob)
    {
        X temp;
        temp.h = h * ob.h;
        return temp;
    }
    X operator+(X ob)
    {
        X temp;
        temp.h = h + ob.h;
        return temp;
    }
    friend X operator+(X ob, int val);
    friend X operator+(int val, X ob);
    friend X operator*(X ob, int val);
    friend X operator*(int val, X ob);
    void Display()
    {
        cout << h << endl;
    }
};
X operator+(X ob, int val)
{
    X temp;
    temp.h = val + ob.h;
    return temp;
}
X operator+(int val, X ob)
{
    X temp;
    temp.h = val + ob.h;
}
X operator*(X ob, int val)
{
    X temp;
    temp.h = val * ob.h;
    return temp;
}
X operator*(int val, X ob)
{
    X temp;
    temp.h = val * ob.h;
    return temp;
}

int main()
{
    X ob1;
    X ob2(10), ob3(20);
    ob1 = (ob2 + 2) * ob3;
    ob1 = (10 + ob2) * ob3;
    ob1 = ob2 * ob3 + 10;
    ob1 = ob3 * 10 * ob2;
    ob1 = 10 * ob2 * ob3;
    ob1 = ob2 * ob3 * 20;
    ob1.Display();
}
