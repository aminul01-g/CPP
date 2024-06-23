#include <bits/stdc++.h>
using namespace std;
class Employee
{
    protected:
    string name;
    int ID, salary;

public:
    Employee()
    {
        name = " ";
        ID = 0;
        salary = 0;
    }
    Employee(string name, int ID, int Salary)
    {
        this->name = name;
        this->ID = ID;
        this->salary = Salary;
    }
    void Display()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << ID << endl;
        cout << "Salary: " << salary << endl;
    }
    virtual void calculateSalary() = 0;
    
};
class full_time : public Employee
{
    double month;

public:
    full_time()
    {
        month = 0;
    }
    full_time(double month, string name, int ID, int salary) : Employee(name, ID, salary)
    {
        this->month = month;
    }

    virtual void calculateSalary() 
    {
        cout << "Total Salary: " << month * salary << endl;
    }
};
class part_time : public Employee
{
    double hours;

public:
    part_time()
    {
        hours = 0;
    }
    part_time(double hours, string name, int ID, int salary) : Employee(name, ID, salary)
    {
        this->hours = hours;
    }

    virtual void calculateSalary() 
    {
        cout << "Total Salary: " << hours * salary << endl;
    }
};
int main()
{
    Employee *ptr;
    full_time ob1(2, "Aminul", 128, 50000);
    ptr = &ob1;
    ptr->calculateSalary();
    return 0;
}
