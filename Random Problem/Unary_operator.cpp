#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
private:
    int height, width;

public:
    Rectangle()
    {
        height = 0;
        width = 0;
    }
    Rectangle(int height, int width)
    {
        this->height = height;
        this->width = width;
    }
    void show()
    {
        cout << height << " " << width << endl;
    }
    friend void operator++(Rectangle &ob1);
    friend void operator++(Rectangle &ob1, int);
};
void operator++(Rectangle &ob1)
{
    ++ob1.height;
    ++ob1.width;
}
void operator++(Rectangle& ob1, int)
{
    ob1.height++;
    ob1.width++;
}
int main()
{
    Rectangle r1(10, 20);
    ++r1;
    r1++;

    r1.show();
}
