#include<iostream>
using namespace std;

int mypow(int a, int b)
{
    if(b==0){
        return 1;
    }
    int c = a;
    for (int i = 1; i < b; i++)
    {
        a = a * c;
    }
    return a;
}

