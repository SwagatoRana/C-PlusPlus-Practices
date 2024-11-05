#include <iostream>
using namespace std;

class Bank
{
    int principal;
    int year;
    float interestrate;
    float returnvalue;

public:
    Bank(){};
    Bank(int p, int y, float r);
    Bank(int p, int y, int r);
    void show();
};

Bank ::Bank(int p, int y, float r)
{
    principal = p;
    year = y;
    interestrate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue + returnvalue * interestrate;
    }
};

Bank :: Bank(int p, int y, int r)
{
    principal = p;
    year = y;
    interestrate = float(r)/100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue + returnvalue * interestrate;
    }
};

void Bank ::show()
{
    cout << "The return value of " << principal << " Rs/- after " << year << " years is " << returnvalue<<endl;
}

int main()
{

    Bank o1,o2;
    int p, y, R;
    float r;

    cout << "Enter the amount, year and interest rate :" << endl;
    cin >> p >> y >> r;
    o1 = Bank(p, y, r);
    o1.show();

    cout << "Enter the amount, year and interest rate :" << endl;
    cin >> p >> y >> R;
    o2 = Bank(p, y, R);
    o2.show();

    return 0;
}