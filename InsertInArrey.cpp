#include <iostream>
using namespace std;
void show(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void insert(int a[], int size, int index, int value)
{
    for (int i = size; i >= index; i--)
    {
        a[i] = a[i-1];
    }
    a[index - 1] = value;
}
int main()
{

    int arr[100] = {4, 8, 3, 4, 0, 1, 8};
    show(arr, 7);
    insert(arr, 7, 4, 9);
    show(arr, 8);

    return 0;
}