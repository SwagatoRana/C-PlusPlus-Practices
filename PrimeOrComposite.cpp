#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    for (int i = 2; i < num; i++)
    {
        if (num%i==0){
            cout<<"It is a composite number."<<endl;
            break;
        }
        else{
            if(i!=num-1){
                continue;
            }
            else{
                cout<<"It is a prime number."<<endl;
            }
        }
    }
    return 0;
}