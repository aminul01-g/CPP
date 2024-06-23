#include<bits/stdc++.h>
using namespace std;

class Product
{
private:
    double price;
    int quantity;
    string name;

public:
    Product(string name, double price, int quantity)
    {
        this->name = name;
        this->price = price;
        this->quantity = quantity;
    }

    Product()
    {
        name = " ";
        price = 0.0;
        quantity = 0;
    }

    string getName()
    {
        return name;
    }

    double getPrice()
    {
        return price;
    }

    int getQuantity()
    {
        return quantity;
    }

    double calculateTotalCost()
    {
        return price * quantity;
    }
};

int main()
{
    Product product1;
    Product product2("laptop", 1200.0, 3);
    product1 = Product("Mobile", 500.0, 2);

    cout << "Product 1: " << product1.getName() << " Total cost: tk" << product1.calculateTotalCost() << endl;
    cout << "Product 2: " << product2.getName() << " Total cost: tk" << product2.calculateTotalCost() << endl;

    return 0;
}