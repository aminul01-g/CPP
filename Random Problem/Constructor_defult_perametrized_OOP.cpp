#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    public:
    int id;
    double gpa;
    void display()
    {
        cout<<id <<"  "<<gpa;
    }
    student(int x, double y) // Constructor: Data type don't needed
    {
         id  = x;
         gpa = y;
    }
    student()
    {
        cout<<"Defult constructor"<<endl;

    }
};
int main()
{
    student ob;//defult constructor..

    student amin(128, 3.44);// Constructor value pass;
    amin.display();
    getch();
}
