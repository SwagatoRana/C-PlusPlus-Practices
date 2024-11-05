#include<iostream>
using namespace std;

class complex{
int a, b;
public:
void setdata(int i, int j){
    a = i;
    b = j;
}
void getdata(){
    cout<<a<<" + "<<b<<" !"<<endl;
}
};

int main(){

    complex A;
    A.setdata(5,3);
    A.getdata();

    complex* aa = &A;
    (*aa).getdata();

    aa->getdata();

    complex* B = new complex;
    B->setdata(7,2);
    (*B).getdata();
    B->getdata();

    aa->setdata(4,5);
    aa->getdata();

    

return 0;
}