#include<iostream>
using namespace std;

class A{
    public:
    int a = 2;
};

class B : virtual public A{

};

class C : virtual public A{

};

class D : public B, public C{

};

int main(){

D g;
cout<<g.a;

return 0;
}