// Lab - 2 , task 01
#include <iostream>
using namespace std;
class Person
{
private:
    string name;
    int age;

public:
    void get_value()
    {
        cout << "Name: " << name << endl
            << "Age: " << age << endl;
    }
    void set_value(string nm, int ag)
    {
        name = nm;
        age = ag;
    }
};
int main()
{
    Person p1;
    Person p2;
    p2.set_value("Aminul", 21);
    p2.get_value();
    return 0;
}
