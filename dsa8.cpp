#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
void traversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        cout << "Elment is : " << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr != head);
}
struct Node *insertarFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return ptr;
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

    head->data = 4;
    head->next = second;

    second->data = 34;
    second->next = third;

    third->data = 7;
    third->next = fourth;

    fourth->data = 25;
    fourth->next = head;

    cout << "Circular list before insertion \n";
    traversal(head);
    head = insertarFirst(head, 5);
    head = insertarFirst(head, 76);
    head = insertarFirst(head, 32);
    cout << "Circular list after insertion\n";
    traversal(head);

    return 0;
}