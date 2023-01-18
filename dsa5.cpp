#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
 void linkedList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data<<endl;
        ptr = ptr->next;
    }
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

    head->data = 7;
    head->next = second;

    second -> data = 54;
    second -> next = third;

    third->data = 87;
    third->next = fourth;

    fourth->data = 23;
    fourth->next = NULL;

    linkedList(head);
    return 0;
}