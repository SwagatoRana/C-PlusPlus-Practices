#include <iostream>
using namespace std;

class A
{
  int a;

public:
  //   A & setdata(int a){
  //    this-> a=a;
  //    return *this;
  //   }

  void setdata(int a)
  {
    this->a = a;
  }

  void getdata()
  {
    cout << a << endl;
  }
};

int main()
{

  A b;
  b.setdata(5);
  b.getdata();

  A c;
  // c.setdata(8).getdata();

  return 0;
}