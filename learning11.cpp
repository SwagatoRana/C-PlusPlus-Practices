#include<iostream>
using namespace std;

class point{
    int x,y;
    friend void distance(point, point);
    public:
   point(int a, int b){
        x = a;
        y = b;
    }
    

    void displaypoint(){
        cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
    }
    

};

void distance(point o1,point o2){
       float d = (((o2.x - o1.x)^2)+((o2.y - o1.y)^2))^(1/2);
       cout<<d;
    }

int main(){
point p(4,5);
point q(2,3);
p.displaypoint();
q.displaypoint();
distance(p,q);

return 0;
}