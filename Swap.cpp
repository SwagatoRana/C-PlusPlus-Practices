#include<iostream>
using namespace std;
// int sum(int a, int b){
//     int c = a+b;
//     return c;
// }



void swap(int &a, int &b){
    int c = a;
    a= b;
    b=c;
    cout<<a<<" "<<b<<endl;
}

int main(){

// int e, f;
// cout<<"Enter the first number :";
// cin>>e;
// cout<<"Enter the second number :";
// cin>>f;
// cout<<"The sum is "<<sum(e,f);

int x=3; int y = 4;
cout<<x<<" "<<y<<endl;
swap(x,y);
cout<<x<<" "<<y;

return 0;


}