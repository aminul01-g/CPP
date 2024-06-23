#include <iostream>
using namespace std;
class FullName
{
    string name;

public:
    FullName()
    {
        name = " ";
    }
    FullName(string name)
    {
        this->name = name;
    }
    friend FullName operator+(FullName ob, FullName ob1);
    void show()
    {
        cout << name << endl;
    }
};
FullName operator+(FullName ob, FullName ob1)
{
    FullName temp;
    temp.name = ob.name + ob1.name;
    return temp;
}
int main()
{
    FullName firstname("Sachin ");
    FullName middlename("Ramesh ");
    FullName lastname("Tendulkar ");
    FullName fullname = firstname + middlename + lastname;
    fullname.show();
    return 0;
}