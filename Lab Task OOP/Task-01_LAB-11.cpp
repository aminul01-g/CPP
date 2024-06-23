#include<bits/stdc++.h>
using namespace std;
class Animal
{
     public:
     virtual void makeSound() = 0;
     virtual void getName() = 0;
};
class Dog : public Animal
{
    public:
    void makeSound()
    { 
          cout <<" Bark " << endl;
    }
    void getName()
    {

    }
};
class Cat : public Animal
{
    public:
    void makeSound()
    { 
        cout << " meow" << endl;
    }
    void getName()
    {

    }
};
class Cow : public Animal
{
    public:
    void makeSound()
    { 
        cout << "moo" << endl;
    }
    void getName()
    {

    }
};
int main()
{
    Animal *ptr;
    Dog d1;
    ptr = &d1;
    ptr ->makeSound();
    return 0;
}
