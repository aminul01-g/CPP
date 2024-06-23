#include<bits/stdc++.h>
using namespace std;
template <class A>
class Container
{
    A arr[1000];
    int index;
    public:
    Container()
    {
        index = 0;
    }
    void addElements(A element)
    {
        arr[index] = element;
        index++;
    }
    void displayElements()
    {
        sort(arr, arr+index);
        for(int i = 0; i < index; i++)
        {
            cout << arr[i] << ' ';
        }
        cout << endl;
    }
    int getSize()
    {
        return index;
    }
};
int main()
{
    Container <int> ob;
    ob.addElements(1);
    ob.addElements(56);
    ob.addElements(3);
    ob.addElements(5);
    ob.addElements(7);
    ob.addElements(57);
    ob.addElements(75);
    ob.displayElements();
}
