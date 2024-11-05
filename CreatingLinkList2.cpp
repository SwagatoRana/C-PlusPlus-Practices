#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
};

void show(node head){
    node* ptr = &head;
    while((*ptr).next != NULL){
        cout<<(*ptr).data<<endl;
        ptr = ptr->next;

    }
    cout<<(*ptr).data;
}

int main(){

    node head;
    node second;
    node third;
    node forth;
    head.data = 5;
    head.next = &second;
    second.data = 3;
    second.next = &third;
    third.data = 7;
    third.next = &forth;
    forth.data = 1;
    forth.next = NULL;
    show(head);


return 0;
}