#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setdeta()
    {
        cout << "Enter Employee ID " << endl;
        cin >> id;
    }

    void getdeta()
    {
        cout << "The id of Employee is " << id << " and this is employee no " << count << endl;
        count++;
    }
};

int Employee::count = 1;

int main()
{

    Employee Swagato, Milan, Rahul;

    Swagato.setdeta();
    Swagato.getdeta();
    Milan.setdeta();
    Milan.getdeta();
    Rahul.setdeta();
    Rahul.getdeta();

    return 0;
}