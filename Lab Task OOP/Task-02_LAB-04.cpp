#include <iostream>
#include <string>
using namespace std;
class  Box2;
class Box1
{
private:
    double area;
    string color;

public:
    Box1(int area, string color)
    {
        this->area = area;
        this->color = color;
    }
    Box1()
    {
        area = 0;
        color = " ";
    }
    void display()
    {
        cout << area << " " << color << endl;
    }
    friend void Compare_Box(Box1 b1, Box2 b2);
};

class Box2
{
private:
    double area;
    string color;

public:
    Box2(int area, string color)
    {
        this->area = area;
        this->color = color;
    }
    Box2()
    {
        area = 0;
        color = " ";
    }
    void display()
    {
        cout << area << " " << color << endl;
    }
    friend void Compare_Box(Box1 b1, Box2 b2);
};

void Compare_Box(Box1 b1, Box2 b2)
{
    if (b1.area > b2.area)
    {
        b1.display();
    }
    else
    {
        b2.display();
    }
}

int main()
{
    Box1 ob1(10, "red");
    Box2 ob2(20, "Green");
    Compare_Box(ob1, ob2);
    return 0;
}
