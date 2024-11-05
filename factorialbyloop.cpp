#include<iostream>
using namespace std;
int main(){
int x,y,a;
cout<<"Enter the base and power: "<<endl;
cin>>x>>y;
a=x;
for(int i=1;i<y;i++){
    x=x*a;
}
cout<<"The result is "<<x;
return 0;
}