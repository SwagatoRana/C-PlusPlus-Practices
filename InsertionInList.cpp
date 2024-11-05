#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void show(node *head)
{
    node* ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

node* insertfirst(node* head, int data){
    node* ptr = new node;
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

node* insertbetween(node* head, int data, int index){
    node* ptr = new node;
    ptr->data=data;
    node* p = head;
    for(int i = 0;i<index-1;i++){
        p = p->next;
    }
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

node* insertlast(node* head, int data){
    node* ptr = new node;
    ptr->data=data;
    node* p = head;
    while(p->next!=NULL){
        p = p->next;
    }
    p->next=ptr;
    ptr->next = NULL;
    return head;
}

node* insertafter(node* head, int data, node* index){
    node* ptr = new node;
    ptr->data=data;
    ptr->next=index->next;
    index->next=ptr;
    return head;
}

int main()
{

    node *head = new node;
    node *second = new node;
    node *third = new node;
    node *forth = new node;
    head->data = 5;
    head->next = second;
    second->data = 1;
    second->next = third;
    third->data = 4;
    third->next = forth;
    forth->data = 7;
    forth->next = NULL;
    // head = insertfirst(head, 55);
    // head = insertbetween(head,6,2);
    // head = insertlast(head,77);
    head = insertafter(head, 55, second);
    show(head);

    return 0;
}