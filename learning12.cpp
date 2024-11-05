#include<iostream>
using namespace std;

class print{

    public:
    
    print(){
        cout<<"constructor is called!!!"<<endl;
    }

    ~print(){
        cout<<"distructor is called!!!"<<endl;
    }

    void abcd(){
        cout<<"abcd"<<endl;
    }

};

int main(){

    print d;
    cout<<"entering the main function"<<endl;
    {
        
        cout<<"entering the block"<<endl;
        print e,f;
        cout<<"exiting the block"<<endl;

    }

    cout<<"back to main function"<<endl;
    d.abcd();

return 0;
}