#include<iostream>
using namespace std;

class Base{
    public:
    int a;
    protected:
        int b; 
    private:
        int c;

};

class Derived : protected Base{
   
};

int main(){
    Base b;
    // Derived d;
    // cout<<d.a;
    // cout<<d.b;
    // cout<<d.c;
    return 0;
}