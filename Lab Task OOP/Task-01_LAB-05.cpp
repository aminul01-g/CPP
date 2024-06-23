#include<bits/stdc++.h>
using namespace std;
class Rectangle
{
    private:
    int height , width;
    public:
    void set_value(int height, int width)
    {
        this -> height = height;
        this -> width = width;
    }
    void get_data()
    {
        cout <<"Height = "<< height << " " <<"Width = "<< width<<endl;
    }
};
int main()
{   
    int n = 40;
    Rectangle R[n];
    for (int i = 0; i < n; i++)
    {
        R[i].set_value(i,i);
    }
    for(int i = 0; i < n; i++)
    {
        R[i].get_data();
    }
    
    return 0;
}
