#include <iostream>
using namespace std;
class A
{
public:
    void ShowA()
    {
        cout << "Euler circuit containing all the edge of a graph" << endl;
    }
};
class C : virtual public A
{
public:
    void ShowC()
    {
        ShowA();
    }
};
class D : virtual public A
{
public:
    void ShowD()
    {
        ShowA();
    }
};
class E : public C, public D
{
public:
    void Show()
    {
        ShowA();
        ShowC();
        ShowD();
    }
};
int main()
{
    E e;
    e.Show();
    return 0;
}