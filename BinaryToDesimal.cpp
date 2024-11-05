#include<iostream>
#include "mypow.cpp"
using namespace std;
int main(){
int n;
cout<<"Enter a binary number: ";
cin>>n;
int ans = 0;
int i = 0;
while(n!=0){
    ans = ans + (n%10)*mypow(2,i);
    n = n/10;
    i++;
}
cout<<"The desimal number is "<<ans;
return 0;
}