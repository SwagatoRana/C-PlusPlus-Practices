#include<iostream>
using namespace std;
class number{
int a;
public :
number(){
    a =0;
}
number(int num){
    a = num;
}
number(number &obj){
    cout<<"Copy constructer called !!! "<<endl;
    a = obj.a;
}
void display(){
    cout<<"The number for this object is "<<a<<endl;
}
};
int main(){
    number x,y,z(6);
    number w(3);
    x.display();
    z.display();
    w.display();
    number asd(x);
    asd.display();
    number o1 = z;
    o1.display();
    

return 0;
}