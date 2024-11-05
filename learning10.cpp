#include<iostream>
using namespace std;

class number{
int a,b;
public :
number(void);
void printnumber(void){
    cout<<"Your number is "<<a<<" and "<<b;
}
};

number :: number(void){
    a = 8;
    b = 5;
}

int main(){

number f;
f.printnumber();

return 0;
}