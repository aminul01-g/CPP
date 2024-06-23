#include<iostream>
using namespace std;
class KKFC
{
private:
    string food[5];
    int n;
public:
    KKFC(int n)
    {
        if(n<3||n>5)
        {
            cout<<"Input the food name:";
        }
        this -> n = n;
    }
    void choosedfood(string f1, string f2, string f3)
    {
        if(n==3)
        {
            food[0] = f1;
            food[1] = f2;
            food[2] = f3;
        }
        else
        {
            cout<<"Wrong number of food";
        }
    }
    void choosedfood(string f1, string f2, string f3, string f4)
    {
         if(n==4)
         {
            food[0] = f1;
            food[1] = f2;
            food[2] = f3;
            food[3] = f4;
         }
         else
            {
               cout<<"Wrong number of food items";
            }

   }
   void choosedfood(string f1, string f2, string f3, string f4, string f5)
    {
         if(n==5)
         {
            food[0] = f1;
            food[1] = f2;
            food[2] = f3;
            food[3] = f4;
            food[4] = f5;
         }
         else
            {
               cout<<"Wrong number of food items";
            }

   }
    void display()
    {
        cout<<"You have ordered "<<n<<" food items:"<<endl;
        for(int i = 0; i<n; i++)
        {
            cout<<food[i]<<endl;
        }
    }
};
int main()
{
    KKFC order(3);
    order.choosedfood("alo", "potol","shak");
    order.display();
    return 0;
}
