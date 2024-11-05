#include<iostream>
using namespace std;

class Base{
    public:
    int var_base = 1;
    virtual void display()=0;
};

class Derived : public Base{
     public:
     int var_derived = 2;
     void display(){
        cout<<"Displaying derived class variable: "<<var_derived<<endl;
     }
};

int main(){

    Derived objDerived;
    Base * BasePointer = &objDerived;
    BasePointer -> display();


return 0;
}