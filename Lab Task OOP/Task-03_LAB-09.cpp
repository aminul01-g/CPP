#include<bits/stdc++.h>
using namespace std;
class Flower
{
    public:
    virtual void showItem() = 0;
};
class Rose : public Flower
{
    public:
    void showItem()
    {
        cout << "sells rose." <<endl;
    }
};
class Marigold : public Flower
{
    public:
    void showItem()
    {
        cout << "sells marigold." <<endl;
    }
};
int main()
{
    Flower *ptr;
    Rose r;
    ptr = & r;
    ptr -> showItem();
    Marigold m;
    ptr = & m;
    ptr -> showItem();
    return 0;
}