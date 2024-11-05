#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>

class Swagato
{
public:
    T1 a;
    T2 b;
    T3 c;

    Swagato(T1 e, T2 f, T3 g)
    {
        a = e;
        b = f;
        c = g;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};

int main()
{

    Swagato<> obj1(3, 5.5, 'z');
    obj1.display();
    cout<<endl;
    Swagato<char, int, char> obj2('d',4,'e');
    obj2.display();

    return 0;
}