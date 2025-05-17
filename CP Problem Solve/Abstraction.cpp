#include<iostream> 
#include<conio.h>
using namespace std;

class MobileUser
{
   public:
   void call()
   {
      cout<<"Hello !"<<endl;
   }
  virtual void sendMassage() = 0;
};
class rahim : public MobileUser
{
    public:
    void sendMassage()
    {
        cout<<" Hi, This is rahim"<<endl;
    }
};
class karim : public MobileUser
{
    public:
    void sendMassage()
    {
        cout<<" Hi, This is karim"<<endl;
    }
};
int main()
{
    MobileUser *m;
    rahim r;
    karim k;
    m = &r;
    m -> call();
    m->sendMassage();
    m = &k;
    m->sendMassage();
    getch();
}
/*
Hello !
 Hi, This is rahim
 Hi, This is karim
*/
