#include <iostream>
using namespace std;

/*int fibonacci(int n)
{
    if (n == 1)
    {
        return 0;
    }
    if (n == 2)
    {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{

    int a;
    cout << "Enter the number : " << endl;
    cin >> a;
    cout << "The value at " << a << "th position in Fibonacci Sequence is " << fibonacci(a);

    return 0;
}
*/

int main()
{
    cout << "Enter the terms: ";
    int n;
    cin >> n;
    int a = 0, b = 1;
    int next;
    cout << a << " ";
    for (int i = 0; i < n; i++)
    {
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    return 0;
}