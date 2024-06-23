#include<iostream>
using namespace std;
class Distance
{
private:
    int kilometers, meters, centimeters;
public:
    Distance(int kilometers, int meters, int centimeters)
    {
        this -> kilometers = kilometers;
        this -> meters = meters;
        this -> centimeters = centimeters;
    }
    Distance sub(Distance ob1, Distance ob2)
{
    Distance temp(0, 0, 0);
    int sub1 = ob1.kilometers * 100000 + ob1.meters * 100 + ob1.centimeters;
    int sub2 = ob2.kilometers * 100000 + ob2.meters * 100 + ob2.centimeters;
    int diff = sub1 - sub2;

    temp.kilometers = diff / 100000;
    diff %= 100000;
    temp.meters = diff / 100;
    diff %= 100;
    temp.centimeters = diff;

    return temp;
}

    void show()
    {
        cout<<kilometers<<" "<<meters<<" "<<centimeters<<endl;
    }
};
int main()
{
    int k1, m1, c1;
    int k2, m2, c2;

    cout << "Input the kilometer, meters, and centimeters for D1: ";
    cin >> k1 >> m1 >> c1;

    cout << "Input the kilometer, meters, and centimeters for D2: ";
    cin >> k2 >> m2 >> c2;

    Distance D1(k1, m1, c1);
    Distance D2(k2, m2, c2);

    Distance sub = D1.sub(D1, D2);
    sub.show();

    return 0;
}
