#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
void linkedlist(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}
// case 1
struct Node *insertatFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = head;
    return ptr;
}
//case 2
struct Node *insertatindex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
//case 3
struct Node *insertatend(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
//case 4
struct Node *insertatNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 21;
    head->next = second;

    second->data = 73;
    second->next = third;

    third->data = 91;
    third->next = fourth;

    fourth->data = 54;
    fourth->next = NULL;

    cout << "Linked list before insertion \n";
    linkedlist(head);
    //head = insertatFirst(head, 56);
    //head = insertatindex(head, 56,1);
    //head = insertatend(head,56);
    head = insertatNode(head, third,45);


    
    cout << "\nLinked list after insertion\n";
    linkedlist(head);
}