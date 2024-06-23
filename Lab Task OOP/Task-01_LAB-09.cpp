#include <bits/stdc++.h>
using namespace std;

class Shape
{
    double side1, side2;

public:
    Shape()
    {
        side1 = 0;
        side2 = 0;
    }

    Shape(double side1, double side2)
    {
        this->side1 = side1;
        this->side2 = side2;
    }

    virtual void display_area() = 0;
};

class Triangle : public Shape
{
    double height, base;

public:
    Triangle()
    {
        height = 0;
        base = 0;
    }

    Triangle(double height, double base)
    {
        this->height = height;
        this->base = base;
    }

    void display_area()
    {
        cout << 0.5 * height * base << endl;
    }
};

class Rectangle : public Shape
{
    double height, width;

public:
    Rectangle()
    {
        height = 0;
        width = 0;
    }

    Rectangle(double height, double width)
    {
        this->height = height;
        this->width = width;
    }

    void display_area()
    {
        cout << height * width << endl;
    }
};

int main()
{
    Shape *ptr;
    Triangle t(10, 20);
    ptr = &t;
    ptr->display_area();
    Rectangle r(10, 20);
    ptr = &r;
    ptr->display_area();
    return 0;
}