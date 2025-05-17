#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
class person
{
public:
    string name;
    int age;
    void display1()
    {
        cout << "Name :" << name << endl;
        cout << "Age: " << age << endl <<endl;
    }
};
class student : public person
{
public:
    int id;
    void display2()
    {

        cout << " Id : " << id << endl;
        display1();
    }
};
int main()
{
    student s1;
    s1.name = "money";
    s1.id = 122;
    s1.age =21;
    s1.display2();

    getch();
}
