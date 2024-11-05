#include<iostream>
using namespace std;
int main(){
int num1,num2,reverse=0;
cout<<"Enter a number: "<<endl;
cin>>num1;
num2=num1;
while(num1!=0){
    reverse = reverse*10 + num1%10;
    num1 = num1/10;
}
if(num2==reverse){
    cout<<"Number "<<num2<<" is a palendrome number. ";
}
else{
    cout<<"Number "<<num2<<" is not a palendrome number. ";
}
return 0;
}