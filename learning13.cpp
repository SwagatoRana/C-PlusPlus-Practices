#include <iostream>
using namespace std;
// class abcd
// {
//     public:
    
// };
int main()
{
    int a = 4;
    int* ptr = &a;
    cout<<ptr<<endl;
    cout<<&a<<endl;
    int* p = new int (7);
    cout<<*p<<endl;
    int*d = new int (9);
    // delete d;
    cout<<*d<<endl;
    int* arr = new int[3];
    arr[0] = 5;
    // arr[1] = 3;
    *(arr+1) = 3;
    arr[2] = 2;
    // delete arr;

    cout<<arr[0]<<endl<<arr[2]<<endl<<arr[1]<<endl;

    int* yo;
    *yo = 4;
    cout<<*yo<<endl;
    
    
    return 0;
}