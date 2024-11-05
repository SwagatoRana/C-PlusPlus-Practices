#include<iostream>
using namespace std;

int product(int a, int b){
    static int c = 0;
    c = c+1;
    int d = a*b + c;
    return d;
}

int main(){
cout<<"Enter the value of a and b : "<<endl;
int a,b;
cin>>a>>b;
cout<<"The product of a and b is "<<product(a,b)<<endl;
cout<<"The product of a and b is "<<product(a,b)<<endl;
cout<<"The product of a and b is "<<product(a,b)<<endl;
cout<<"The product of a and b is "<<product(a,b)<<endl;
cout<<"The product of a and b is "<<product(a,b)<<endl;
cout<<"The product of a and b is "<<product(a,b)<<endl;
cout<<"The product of a and b is "<<product(a,b)<<endl;
cout<<"The product of a and b is "<<product(a,b)<<endl;





return 0;
}