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
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

node *deletionfirst(node *head)
{
    node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

node *deletionbetween(node *head, int index)
{
    node *ptr = head;
    node *ptrtofree = head;
    for (int i = 0; i < index - 2; i++)
    {
        ptr = ptr->next;
    }
    for (int i = 0; i < index - 1; i++)
    {
        ptrtofree = ptrtofree->next;
    }
    ptr->next = ptrtofree->next;
    free(ptrtofree);
    return head;
}

node *deletionlast(node *head)
{
    node *ptr = head;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    node *p = ptr->next;
    ptr->next = NULL;
    free(p);
    return head;
}

node *deletedata(node *head, int data)
{
    node *ptr = head;
    if (data == head->data)
    {
        deletionfirst(head);
    }
    else
    {
        while (ptr->next->data != data)
        {
            ptr = ptr->next;
        }
        node *p = ptr->next;
        ptr->next = ptr->next->next;
        free(p);

        return head;
    }
}

int main()
{
    node *head = new node;
    node *second = new node;
    node *third = new node;
    node *forth = new node;
    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = NULL;
    head->data = 4;
    second->data = 8;
    third->data = 9;
    forth->data = 2;
    head = deletionfirst(head);
    // head = deletionbetween(head,3);
    // head = deletionlast(head);
    // head = deletedata(head,8);
    show(head);
    return 0;
}