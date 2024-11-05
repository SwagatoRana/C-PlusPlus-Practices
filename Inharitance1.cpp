#include <iostream>
using namespace std;

class A
{
    int c = 30;

public:
    int a, b;
    A()
    {
        a = 10;
        // cout << "hallo" << endl;
        // cout<<a<<endl;
    }
    void printA()
    {
        cout << a << endl;
    }
    // void printb()
    // {
    //     cout << b << endl;
    // }
    void printc()
    {
        cout << c << endl;
    }
};

class B : public A
{

public:
    B()
    {
        b = 20;
        // cout << "yo" << endl;
        // a = 20;
        // cout<<a<<endl;
    }
    void printB()
    {
        cout << b << endl;
        // cout << a << endl;
    }
    // void printa()
    // {
    //     cout << a << endl;
    // }
};


//syntax for multiple inharitance
// class derived : visibity-mode base1, visibility-mode base2{

// };

int main()
{
    A obj1;
    obj1.printA();
    cout << obj1.a << endl;
    B obj2;
    obj2.printB();
    cout << obj2.b << endl;
    // obj2.printa();
    obj2.printc();

    return 0;
}