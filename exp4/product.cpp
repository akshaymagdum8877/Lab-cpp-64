#include <iostream>
using namespace std;
class Product
{
    private:
    string productName;
    int productId;
    int quantity;
    float price;

public:
    void getdata()
    {
        cout << "Enter Product Name: ";
        cin >> productName;
        cout << "Enter Product ID: ";
        cin >> productId;
        cout << "Enter Quantity: ";
        cin >> quantity;
        cout << "Enter Price: ";
        cin >> price;
    }

    void putdata()
    {
        cout << "\n--- Product Details ---" << endl;
        cout << "Product Name: " << productName << endl;
        cout << "Product ID: " << productId << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Product a;
    a.getdata();
    a.putdata();
    return 0;
}
