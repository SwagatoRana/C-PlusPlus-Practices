#include <iostream>
using namespace std;

class NormalCalculator
{
public:
    int a, b, c;
    void normalcalculate()
    {
        cout << "press 1 if you want to add two number " << endl;
        cout << "press 2 if you want to minus two number " << endl;
        cout << "press 3 if you want to multiply two number " << endl;
        cout << "press 4 if you want to devide two number " << endl;
        cin >> a;
        if (a == 1)
        {
            cout << "So you want to add two number, enter two number" << endl;
            cin >> b;
            cin >> c;
            cout << "Add of this two numbers is " << b + c << endl;
        }
        if (a == 2)
        {
            cout << "So you want to minus two number, enter two number" << endl;
            cin >> b;
            cin >> c;
            cout << "minus of this two numbers is " << b - c << endl;
        }
        if (a == 3)
        {
            cout << "So you want to multiply two number, enter two number" << endl;
            cin >> b;
            cin >> c;
            cout << "multiply of this two numbers is " << b * c << endl;
        }
        if (a == 4)
        {
            cout << "So you want to devide two number, enter two number" << endl;
            cin >> b;
            cin >> c;
            float z=b/c;
            cout << "devide of this two numbers is " << z << endl;
        }
    }
};

class SintificCalculator{
    public:
    int e,f;
    int factorial(int i){
        if(i<2){
            return 1;
        }
        return i*factorial(i-1);
    }
    void SintificCalculate(){
         cout << "press 1 if you want to know factorial of a number " << endl;
        
        cin >> e;
        if (e == 1)
        {
            cout << "So you want to know factorial of a number, enter a number" << endl;
            cin >> f;
            int g = factorial(f);
            cout<<"The factorial of that number is "<<g<<endl;
        }
        
    }
    

};

class HybridCalculator : public NormalCalculator, public SintificCalculator{
    public:
    int k;
        void HybridCalculate(){
            cout<<"Enter 1 if you want to use normal calculator and enter 2 if you want to use syntific calculator :"<<endl;
            cin>>k;
            if(k==1){
                normalcalculate();
            }
            if(k==2){
                SintificCalculate();
            }
        }
};

int main()
{

    // NormalCalculator A;
    // A.normalcalculate();
    // SintificCalculator B;
    // B.SintificCalculate();
    HybridCalculator C;
    C.HybridCalculate();

    return 0;
}