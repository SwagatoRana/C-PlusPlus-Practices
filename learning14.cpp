#include <iostream>
using namespace std;

class ShopItem
{
    int id, price;

public:
    void setId(int a, int b)
    {
        id = a;
        price = b;
    }

    void getId()
    {
        cout << "The price of Item no " << id << " is " << price << endl;
    }
};

int main()
{

    int x, y;
    int c = 3;
    ShopItem *veggitable = new ShopItem[c];
    ShopItem *ptr = veggitable;

    for (int i = 0; i < c; i++)
    {

        cout << "Enter the id :" << endl;
        cin >> x;
        cout << "Enter the price :" << endl;
        cin >> y;
        veggitable->setId(x, y);
        veggitable++;
    }

    for (int i = 0; i < c; i++)
    {
        ptr->getId();
        ptr++;
    }

    return 0;
}