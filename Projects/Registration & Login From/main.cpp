#include <iostream>
#include <string.h>
#include <fstream>
#include <conio.h>
using namespace std;
class temp
{
    string userName, Email, password;
    string searchName, searchPass, searchEmail;
    fstream file;

public:
    void login();
    void signUp();
    void forget();
} obj;
int main()
{
    char choice;
    cout << "\n1- Login";
    cout << "\n2- sign-up";
    cout << "\n3- Forget Password";
    cout << "\n4- Exit";
    cout << "\n5- Enter Your Choice :: ";
    cin >> choice;

    cin.ignore();

    switch (choice)
    {
    case '1':
        obj.login();
        break;

    case '2':
        obj.signUp();
        break;

    case '3':
        obj.forget();
        break;

    case '4':
        return 0;
        break;

    default:
        cout << "Invalid selection...!";
    }
    
}

void temp :: signUp()
{
    cout << "\nEnter Your User name :: ";
    getline(cin,userName);
    cout << "\nEnter Your Email Address :: ";
    getline(cin,Email);
    cout << "\nEnter your Password :: ";
    getline(cin,password);

    file.open("a.txt", ios ::out | ios ::app);
    file << userName << "*" << Email<<"*"<< password << endl;
    file.close();
}
void temp ::login()
{

    cout << "-----------LOGIN----------" << endl;
    cout << "Enter Your User Name :: " << endl;
    getline(cin, searchName);
    cout << "Enter Your password :: " << endl;
    getline(cin, searchPass);

    file.open("a.txt", ios ::in);
    getline(file, userName, '*');
    getline(file, Email, '*');
    getline(file, password, '\n');
    while (!file.eof())
    {
        if (userName == searchName)
        {
            if (password == searchPass)
            {
                cout << "\nAccount Login Succesfull !";
                cout << "\nUsername :: " << userName << endl;
                cout << "\nEmail :: " << Email << endl;
            }
            else
            {
                cout << "Password is Incorrect..:(!";
            }
        }
        getline(file, userName, '*');
        getline(file, Email, '*');
        getline(file, password, '\n');
    }
    file.close();
}
void temp ::forget()
{
    cout << "\nEnter Your UserName :: ";
    getline(cin, searchName);
    cout << "\nEnter Your Email Address :: ";
    getline(cin, searchEmail);

    file.open("a.txt", ios ::in);
    getline(file, userName, '*');
    getline(file, Email, '*');
    getline(file, password, '\n');
    while (!file.eof())
    {
        if (userName == searchName)
        {
            if (Email == searchEmail)
            {
                cout << "\nAccount found..!" << endl;
                cout << "Your Password :: " << password << endl;
            }
            else
            {
                cout << "Not found..!\n";
            }
        }
        else
        {
            cout << "\nNot Found..!\n";
        }
    }
    file.close();
}
