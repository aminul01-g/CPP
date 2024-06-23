#include<iostream>
using namespace std;
class Book
{
    private:
    string  title, author;
    int year;
    public:
    Book()
    {
        title = " ";
        author = " ";
        year = 0;
    }
    Book(string ti, string aut, int ye)
    {
        title = ti;
        author = aut;
        year = ye;
    }
    void Display()
    {
        cout<<"Title: "<<title
            <<endl<<"Author: " <<author
                <<endl<<"Year : "<<year<<endl;
    }
    ~Book()
    {
        cout<<"Object is destroyed !";
    }
};
int main()
{
    Book b1;
    Book b2("Dop", "Aminul", 2022);
    b2.Display();
    return 0;
}
