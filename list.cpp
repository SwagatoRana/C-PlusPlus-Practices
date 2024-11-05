#include<iostream>
#include<list>
using namespace std;

void display(list<int> l){
    list<int> :: iterator it;
    for(it = l.begin(); it != l.end(); it++){
        cout<<*it<<" ";
    }
}

int main(){

    list<int> list1;
    list<int> list2(4);
    list1.push_back(4);
    list1.push_back(3);
    list1.push_back(7);
    list1.push_back(8);
    list1.push_back(2);
    display(list1);
    cout<<endl;
    list<int> :: iterator iter1 = list2.begin();
    *iter1 = 3;
    iter1++;
    *iter1 = 7;
    iter1++;
    *iter1 = 4;
    iter1++;
    *iter1 = 9;
    display(list2);
    cout<<endl;
    // list1.pop_back();
    // list1.pop_front();
    // display(list1);

    list1.merge(list2);

    // list1.sort();

    // list1.remove(7);

    display(list1);
    

return 0;
}