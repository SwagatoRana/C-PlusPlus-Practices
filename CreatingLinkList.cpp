#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void show(node *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
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
    show(head);

    return 0;
}