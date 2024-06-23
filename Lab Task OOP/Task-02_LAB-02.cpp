#include<iostream>
#include<conio.h>
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
    Rectangle(int len, int wid)
    {
        length = len;
        width = wid;
    }
    void area(int length, int width)
    {
        cout<<"Area = "<<length * width<<endl;
    }
};
int main()
{
    Rectangle r1;
    Rectangle r2;
    r2.area(10, 20);
    getch();
}
