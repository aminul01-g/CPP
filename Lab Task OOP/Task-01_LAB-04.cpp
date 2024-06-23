#include<iostream>
using namespace std;
class Square
{
    private:
    int length;
    public:
    void set_length(int len)
    {
        length = len;
    }
    void display()
    {
        cout<<length<<endl;
    }
    friend int area(Square ob);
};
int area(Square ob)
{
    cout<<ob.length*ob.length<<endl;
}
int main()
{
    Square x;
    x.set_length(2);
    area(x);
    return 0;
}
