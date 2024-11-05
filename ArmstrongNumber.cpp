#include <iostream>
using namespace std;

int mypow(int a, int b)
{
    int c = a;
    for (int i = 1; i < b; i++)
    {
        a = a * c;
    }
    return a;
}

int main()
{
    int num1, num2, num3, count = 0, sum = 0;
    cout << "Enter a number: " << endl;
    cin >> num1;
    num2 = num1;
    num3 = num1;
    while (num1 != 0)
    {
        count++;
        num1 = num1 / 10;
    }
    while (num2 != 0)
    {
        sum = sum + mypow(num2 % 10, count);
        num2 = num2 / 10;
    }

    if (num3 == sum)
    {
        cout << "It is an armstrong number.";
    }
    else
    {
        cout << "It is not an armstrong number.";
    }

    return 0;
}