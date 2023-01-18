#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
    int data;
    struct Node *next;
};
void traversal(struct Node *ptr){
    while(ptr!=NULL){
        cout<<"Element : "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
struct Node *deleteatFirst(struct Node *head){
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct Node *deleteatINdex(struct Node*head, int index){
    struct Node *p = head;
    struct Node *q = head->next;
    for(int i=0; i<index-1; i++){
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
struct Node *deleteatLast(struct Node*head){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next!=NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
struct Node *deleteatvalue(struct Node *head, int value){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data != value && q-> next != NULL){
        p = p->next;
        q = q->next;
    }
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node * )malloc(sizeof(struct Node ));
    second = (struct Node * )malloc(sizeof(struct Node ));
    third = (struct Node * )malloc(sizeof(struct Node ));
    fourth = (struct Node * )malloc(sizeof(struct Node ));

    head->data = 4;
    head->next = second;
    
    second->data = 34;
    second->next = third;

    third->data = 7;
    third->next = fourth;

    fourth->data = 25;
    fourth->next = NULL;

    cout<<"Linked list before deletion \n";
    traversal(head);
   // head = deleteatFirst(head);
    //head = deleteatINdex(head,1);
   // head = deleteatLast(head);
    head = deleteatvalue(head,7);
    cout<<"Linked list after deletion\n";
    traversal(head);
     return 0;

}