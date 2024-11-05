#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "I will give a party tomorrow morning . Please enter your age : " << endl;
    cin >> age;
    if ((0<age)&(age<18))
    {
        cout << "You are under 18, so I'm sorry, but you can't come to my party";
    }
    else if (age < 1)
    {
        cout << "You are not born yet";
    }
    else if ((70<age)&(age<91))
    {
        cout << "Can you even walk ? It would be better if you won't come";
    }
    else if ((90<age)&(age<123))
    {
        cout << "Are you still alive ?!";
    }
    else if (age > 122)
    {
        cout << "Are you kidding me. The world record of maximum age is 122. So why isn,t it " << age;
    }
    else
    {
        cout << "Please come to my party tomorrow 9 a.m. ";
    }
    return 0;
}