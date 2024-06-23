#include <iostream>
using namespace std;
class Rectangle
{
    int length, width;

public:
    Rectangle()
    {
        length = 0;
        width = 0;
        cout << "Defult base constructor is called" << endl;
    }
    Rectangle(int length, int width)
    {
        this->length = length;
        this->width = width;
        cout << "Perameterized base constructor is called" << endl;
    }
    void show_l_w()
    {
        cout << "length = " << length << "  "
             << "Width = " << width << endl;
    }
    ~Rectangle()
    {
        cout << "Base object destroyed." << endl;
    }
};
class Box : public Rectangle
{
    int height;

public:
    Box()
    {
        height = 0;
    }
    Box(int length, int width, int height) : Rectangle(length, width)
    {
        this->height = height;
        cout << "Derived parameterized constructor is called" << endl;
    }
    void show_h()
    {
        cout << "Height = " << height << endl;
    }
    void show_l_w_h()
    {
        show_l_w();
        show_h();
    }
    ~Box()
    {
        cout << "Derived Object is destroyed" << endl;
    }
};
int main()
{
    // Box b(10, 20, 30);
    // b.show_h();
    // b.show_l_w_h();
    Box b;

    return 0;
}