#include<iostream>
using namespace std;
class Student
{
    private:
    string name;
    int ID;
    public:
    Student()
    {
        name = " ";
        ID = 0;
    }
    Student(string nm, int id)
    {
        name = nm;
        ID = id;
    }
    Student(const Student &other)
    {
        name = other.name;
        ID = other.ID;
    }
    void Display()
    {
        cout<<"Name: "<<name<<endl
            <<"ID: "<<ID<<endl;
    }
};
int main()
{
    Student s1;
    Student s2("Aminul",128);
    Student s3;
    s3 = s2;
    s3.Display();
    return 0;
}
