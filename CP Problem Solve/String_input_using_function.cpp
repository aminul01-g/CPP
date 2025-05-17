#include <iostream>
#include <conio.h>
using namespace std;
char display(char name[], int s)
{
    cout << "Input your name: ";
    cin.ignore();
    cin.getline(name,s);
    cout << "Hello , " << name << "!";
}
int main()
{
    int s;
    cout << "Input your name size : ";
    cin >> s;
    char name[s];
    display(name, s);
    getch();
}
