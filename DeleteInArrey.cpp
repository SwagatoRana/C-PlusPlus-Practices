#include <iostream>
using namespace std;
void show(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}
void delet(int a[], int size, int index)
{
    for (int i = index - 1; i < size; i++)
    {
        a[i] = a[i + 1];
    }
}
int main()
{
    int arr[100] = {4, 3, 6, 7, 2};
    show(arr, 5);
    cout << endl;
    delet(arr, 5, 3);
    show(arr, 4);
    return 0;
}