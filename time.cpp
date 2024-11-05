#include<iostream>
#include<ctime>
using namespace std;
int main(){

    time_t t = time(nullptr);
    cout<<"The time is "<<ctime(&t);

return 0;
}