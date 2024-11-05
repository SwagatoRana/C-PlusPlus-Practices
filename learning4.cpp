#include<iostream>
using namespace std;

struct student{
    int id;
    char name;
    int roll;
    char sec;
};

union money{
    int car;
    int laptop;
    int glass;
};


int main(){

// union money rupees;
// rupees.car=222;
// rupees.laptop=123;
// rupees.glass=11;
// cout<<rupees.car<<endl;
// cout<<rupees.laptop<<endl;
// cout<<rupees.glass;


// struct student Swagato;
// Swagato.id = 444;
// Swagato.sec = 'C';
// Swagato.roll=42;
// cout<<Swagato.id<<endl;
// cout<<Swagato.sec<<endl;
// cout<<Swagato.roll;


enum meal{breakfirst,lunch,dinner};
cout<<lunch<<endl;
meal m2 = lunch;
cout<<m2;


    return 0;
}
