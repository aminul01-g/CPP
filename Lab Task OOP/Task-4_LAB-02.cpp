#include<iostream>
using namespace std;
class Triangle
{
    private:
    double height, base;
    public:
    Triangle()
    {
        height = 0;
        base = 0;
    }
    Triangle(double hi, double be)
    {
        height =hi;
        base = be;
    }
    void Display()
    {
        cout<<"Height: "<<height<<" "<<"Base: "<<base<<endl;
    }
    Triangle(const Triangle &other)
    {
        height = other.height;
        base = other.base;
    }

};
int main()
{
    Triangle ob1(10,20);
    Triangle ob2 = (ob1);
    ob2.Display();
    return 0;
}
