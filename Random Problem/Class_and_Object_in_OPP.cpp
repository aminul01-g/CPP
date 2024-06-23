#include <iostream>
#include <conio.h>
using namespace std;

class student
{
public:
    int id;
    double gpa;
};

int main()
{
    student Amin;
    Amin.id = 128;
    Amin.gpa = 4.00;
    cout << "Amin ID : " << Amin.id << endl
         << "Amin GPA : " << Amin.gpa << endl
         << endl;

    student hadi;
    hadi.id = 130;
    hadi.gpa = 3.98;
    cout << "Haid ID : " << hadi.id << endl
         << " Hadi GPA : " << hadi.gpa << endl;
    getch();
}

/*
Amin ID : 128
Amin GPA : 4

Haid ID : 130
 Hadi GPA : 3.98

*/
