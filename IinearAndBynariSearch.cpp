#include <iostream>
using namespace std;
int linearsearch(int a[], int value, int size)
{
    // int size = sizeof(a)/sizeof(int);
    for (int i = 0; i < size; i++)
    {
        if (a[i] == value)
        {
            return i + 1;
        }
    }
    return -1;
}
int bynarisearch(int a[], int value, int size)
{
    int low = 0;
    int high = size - 1;
    int mid;

    for (; low <= high;)
    {
        int mid = (high + low) / 2;
        if (a[low] == value)
        {
            return low + 1;
        }
        if (a[high] == value)
        {
            return high + 1;
        }
        if (a[mid] == value)
        {
            return mid + 1;
        }
        if (a[mid] < value)
        {
            low = mid + 1;
        }
        if (a[mid] > value)
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{

    int arr[] = {1,5,8,33,99,106};
    int index = bynarisearch(arr,106, 10);
    cout << index;

    return 0;
}