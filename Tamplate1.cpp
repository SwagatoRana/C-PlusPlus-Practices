#include <iostream>
using namespace std;

template <class A>

class vector
{
public:
    int size;
    A *arr;
    vector(int m)
    {
        size = m;
        arr = new A[size];
    }
    A dotproduct(vector v)
    {
        A d = 0;
        for (int i = 0; i < size; i++)
        {
            d = d + this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{

    vector<float> v1(3);
    cout << "Enter the value of i,j,k of the first vector." << endl;
    cin >> v1.arr[0];
    cin >> v1.arr[1];
    cin >> v1.arr[2];
    vector<float> v2(3);
    cout << "Enter the value of i,j,k of the second vector." << endl;
    cin >> v2.arr[0];
    cin >> v2.arr[1];
    cin >> v2.arr[2];
    float a = v1.dotproduct(v2);
    cout << "The dot product of these two vector is " << a << endl;

    return 0;
}