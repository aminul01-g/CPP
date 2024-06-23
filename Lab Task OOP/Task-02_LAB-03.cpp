#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length, width;
    public:
    Rectangle()
    {
        length = 0;
        width = 0;
    }
    void Set_value(int len, int wid)
    {
        length = len;
        width = wid;
    }

    void display()
    {
        cout<<"Length: "<<length<<endl
            <<"Width: "<<width<<endl;
    }

        void area(int length, int width)
    {
        cout<<"Area: "<<length*width<<endl;
    }

    void combine(Rectangle ob1,Rectangle ob2)
    {
        length = ob1.length + ob2.length;
        width = ob1.width +ob2.width;
    }
};
int main()
{
    //Default Rectangle
    Rectangle r1;
    Rectangle r2;
    //Rectangle 2
    r2.Set_value(10,20);
    r2.display();
    r2.area(10,20);
    //Rectangle 3
    Rectangle r3;
    r3.Set_value(20,30);
    r2.display();
    r3.area(10,20);
    //combine Rectangle
    Rectangle r4;
    r4.combine(r2,r3);
    r4.display();
    return 0;
}
