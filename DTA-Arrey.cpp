#include<iostream>
#include<stdlib.h>
using namespace std;
class Arrey{
    public:
    int totalsize;
    int usedsize;
    int* ptr;
    Arrey( int b, int c){
        totalsize = b;
        usedsize = c;
        ptr = (int*)malloc(b*sizeof(int));
    }
    void setvalue(){
        int n;
       for(int i = 0;i<usedsize;i++){
        cout<<"Enter the value "<<i+1<<endl;
        cin>>ptr[i];
       }
    }
    void show(){
        int n;
        for(int i = 0; i < usedsize; i++){
            cout<<ptr[i]<<endl;
        }
    }
};
int main(){
    
    Arrey arr(10,5);
    arr.setvalue();
    arr.show();

return 0;
}