#include<iostream>
using namespace std;

class Base1{
    public:
  Base1(){
    cout<<"Constructor of Base1 is called"<<endl;
  }  
  Base1(int x){
    cout<<"Constructor of Base1 with a argument is called"<<endl;
  }  
};
class Base2{
    public:
  Base2(){
    cout<<"Constructor of Base2 is called"<<endl;
  }  
  Base2(int x){
    cout<<"Constructor of Base2 with a argument is called"<<endl;
  }  
};

class Derived : public Base1, /*virtual*/ public Base2{
    public:
    Derived(){
        cout<<"Constructor of Derived is called"<<endl;
    }
    Derived(int x){
    cout<<"Constructor of Derived with a argument is called"<<endl;
  }  
    
};

int main(){

    Derived A(4);

return 0;
}