#include <iostream>
using namespace std;
class y;
class x
{
private:
    int data1, data2;

public:
    void set_d1_d2(int d1, int d2)
    {
        data1 = d1;
        data2 = d2;
    }
    void get_d1_d2()
    {
        cout << data1 << " " << data2 << endl;
    }
    friend int sum(x ob1, y ob2);
    friend int exchange(x &ob1, y &ob2);
};
class y
{
private:
    int data1, data2;

public:
    void set_d1_d2(int d1, int d2)
    {
        data1 = d1;
        data2 = d2;
    }
    void get_d1_d2()
    {
        cout << data1 << "  " << data2 << endl;
    }
    friend int sum(x ob1, y ob2);
    friend int exchange(x &ob1, y &ob2);
};
int sum(x ob1, y ob2)
{
    int sum;
    sum = ob1.data1 + ob2.data2;
    return sum;
}
int exchange(x &ob1, y &ob2)
{
    int temp;
    temp = ob1.data1;
    ob1.data1 = ob2.data2;
    ob2.data2 = temp;
    cout << ob1.data1 << " " << ob2.data2;
}
int main()
{
    x x1;
    x1.set_d1_d2(15, 20);
    x1.get_d1_d2();
    y y1;
    y1.set_d1_d2(20, 30);
    y1.get_d1_d2();
    cout << sum(x1, y1) << endl;
    exchange(x1, y1);
    return 0;
}
