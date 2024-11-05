#include<iostream>
using namespace std;
class complex{
int a;
int b;

public :
void setdeta(int v1, int v2){
    a = v1;
    b = v2;
}
void getdata(){
    cout<<a<<" + "<<b<<" !"<<endl;
}
void sum(complex o1, complex o2){
    a = o1.a + o2.a;
    b = o1.b + o2.b;
    cout<<"Sum of the complex number is "<<a<<" + "<<b<<"i";
}
};

int main(){

complex c1, c2, c3;
c1.setdeta(2,4);
c1.getdata();
c2.setdeta(5,7);
c2.getdata();
c3.sum(c1, c2);
return 0;
}