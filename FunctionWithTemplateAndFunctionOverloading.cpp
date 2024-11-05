#include <iostream>
using namespace std;
template <class T>
class Swagato
{
public:
    T data;
    Swagato(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Swagato<T>::display()
{
    cout << data << endl;
}

template <class T>
void func(T a)
{
    cout << "I'm templatize func() " << a << endl;
}

void func(int a)
{
    cout << "I'm normal func() " << a << endl;
}

int main()
{

    Swagato<int> obj1(5);
    cout << obj1.data << endl;
    obj1.display();
    cout << endl;
    func(4);
    func(4.5);
    func('d');

    return 0;
}