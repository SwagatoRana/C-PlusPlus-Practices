#include <iostream>
using namespace std;
int main()
{
    // int n;
    // cout << "Enter the number: ";
    // cin >> n;
    // int i = 1;
    // int result = 0;
    // while (n != 0)
    // {
    //     int bit = n & 1;
    //     result = (bit) * i + result;
    //     n = n >> 1;
    //     i = i*10;
    // }
    // cout << "The bynari number is " << result;



    int n;
    cout << "Enter a number: ";
    cin >> n;
    int ans = 0;
    int i = 1;
    while (n != 0)
    {
        ans = ans + i * (n % 2);
        n = n / 2;
        i *= 10;
    }
    cout << ans;

    return 0;
}