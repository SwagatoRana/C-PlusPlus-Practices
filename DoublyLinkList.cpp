#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
};

void show(node* head){
    node* ptr = head;
    while(ptr->next != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
    cout<<ptr->data<<" ";

    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->prev;
    }
}

int main(){

    node* head = new node;
    node* second = new node;
    node* third = new node;
    node* forth = new node;

    head->data = 7;
    head->next = second;
    head->prev = NULL;
    second->data = 1;
    second->next = third;
    second->prev = head;
    third->data = 8;
    third->next = forth;
    third->prev = second;
    forth->data = 3;
    forth->next = NULL;
    forth->prev = third;
    show(head);

return 0;
}