#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imaginary;

public:
    Complex()
    {
        real = 0;
        imaginary = 0;
    }
    Complex(int re, int ima)
    {
        real = re;
        imaginary = ima;
    }
    void display()
    {
        cout << real << " + " << imaginary << "i" << endl;
    }
    friend Complex addComplex(Complex ob1, Complex ob2);
    friend Complex mul(Complex ob1, Complex ob2);
};
Complex addComplex(Complex ob1, Complex ob2)
{
    Complex temp;
    temp.real = ob1.real + ob2.real;
    temp.imaginary = ob1.imaginary + ob2.imaginary;
    return temp;
}
Complex mul(Complex ob1, Complex ob2)
{
    Complex temp;
    temp.real = (ob1.real * ob2.real) - (ob1.imaginary * ob2.imaginary);
    temp.imaginary = (ob1.imaginary * ob2.real) - (ob1.real * ob2.imaginary);
}
int main()
{
    Complex r1;
    Complex r2(1, 2);
    Complex r3(3, 4);
    Complex r4;
    r4 = addComplex(r2, r3);
    r4.display();
    Complex r5;
    r5 = mul(r2, r3);
    r5.display();
    return 0;
}
