#include <bits/stdc++.h>
using namespace std;
class Animal
{
public:
    virtual void makeSound() = 0;
};
class Dog : public Animal
{
    void makeSound()
    {
        cout << "bark" << endl;
    }
};
class Cat : public Animal
{
    void makeSound()
    {
        cout << "meow" << endl;
    }
};
int main()
{
    Animal *ptr;
    Dog d;
    ptr = &d;
    ptr->makeSound();
    Cat c;
    ptr = &c;
    ptr->makeSound();
    return 0;
}