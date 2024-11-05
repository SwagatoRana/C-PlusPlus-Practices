#include<iostream>
using namespace std;
class base1{
    public:
    void print(){
        cout<<"Yo"<<endl;
    }
};
class base2{
    public:
    void print(){
        cout<<"Hello"<<endl;
    }
};
class derived : public base1, public base2{
    public:
    void print(){
        base2 :: print();
    }
};
int main(){

    base1 a;
    base2 b;
    derived c;
    a.print();
    b.print();
    c.print();

return 0;
}