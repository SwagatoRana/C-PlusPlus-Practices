#include<iostream>
using namespace std;

class shop{
    int itemid[100];
    int itemprice[100];
    int counter;

    public:
    void counternumber(void){counter = 0;}
    void setprice(void);
    void displayprice(void);
};

void shop :: setprice(void)
{
cout<<"Enter ID of your item no "<<counter+1<<endl;
cin>>itemid[counter];
cout<<"Enter price of your item : "<<endl;
cin>>itemprice[counter];
counter++; 
}

void shop :: displayprice(void){
    for(int i = 0; i<counter; i++ ){
        
        cout<<"The price of item with itemid "<<itemid[i]<<" is "<<itemprice[i]<<endl;

    }
    
}

int main(){

shop dukaan;
dukaan.counternumber();
dukaan.setprice();
dukaan.setprice();
dukaan.setprice();
dukaan.displayprice();
return 0;

}