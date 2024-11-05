#include<iostream>
using namespace std;
int main(){

/*
int n;
cout<<"Enter the number of rows: ";
cin>>n;
for(int i =1;i<=n;i++){
    for(int j=0;j<i;j++){
        cout<<"*";
    }
    cout<<endl;
}
*/

/*
int n;
cout<<"Enter the number of rows: ";
cin>>n;
int k=1;
for(int i = 0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<k<<" ";
        k++;
    }
    cout<<endl;
}
*/


int n;
cout<<"Enter the number of rows: ";
cin>>n;
int k=1;
int h=n-1;
for(int i = 0;i<n;i++){
    for(int i = h;i!=0;i--){
        cout<<" ";
    }
    for(int j=0;j<k;j++){
        cout<<"*";
    }
    cout<<endl;
    k=k+2;
    h--;
}


return 0;
}