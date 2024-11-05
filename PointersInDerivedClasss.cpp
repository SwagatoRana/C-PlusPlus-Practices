#include<iostream>
using namespace std;

class Base{
    public:
    int var_base = 1;
    /*virtual*/ void display(){
        cout<<"Displaying Base class variable: "<<var_base<<endl;
    }
};

class Derived : public Base{
     public:
     int var_derived = 2;
     void display(){
        cout<<"Displaying derived class variable: "<<var_derived<<endl;
     }
};

int main(){

    Base objBase;
    Derived objDerived;
    Base * BasePointer = &objDerived;
    BasePointer -> display();
    objDerived.display();
    Base* BasePointer2 = &objBase;
    BasePointer2->display();


return 0;
}