#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int real, imaginary;

public:
    Complex()
    {
        real = 0;
        imaginary = 0;
    }
    Complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    void Display()
    {
        cout << real;
        if (imaginary >= 0)
        {
            cout << "+" << imaginary << "i" << endl;
        }
        else
        {
            cout << "-" << abs(imaginary) << "i" << endl;
        }
    }
    Complex operator+(Complex ob)
    {
        Complex temp;
        temp.real = real + ob.real;
        temp.imaginary = imaginary + ob.imaginary;
        return temp;
    }
    Complex operator-(Complex ob)
    {
        Complex temp;
        temp.real = real - ob.real;
        temp.imaginary = imaginary - ob.imaginary;
        return temp;
    }
    Complex operator*(Complex ob)
    {
        Complex temp;
        temp.real = real * ob.real - imaginary * ob.imaginary;
        temp.imaginary = real * ob.imaginary + imaginary * ob.real;
        return temp;
    }
    friend void operator++(Complex &ob);
    friend void operator--(Complex &ob, int);
};
void operator++(Complex &ob)
{
    ++ob.real;
}
void operator--(Complex &ob, int)
{
    ob.imaginary--;
}
int main()
{
    Complex c1(10, 20);
    Complex c2(30, 40);
    Complex c4 = c1 + c2;
    Complex c3 = c1 - c2;
    Complex c5 = c1 * c2;

    c3.Display();
    c4.Display();
    c5.Display();
    ++c1;
    c2--;
    c1.Display();
    c2.Display();
    return 0;
}
