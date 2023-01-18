#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node *f = NULL;
struct Node *r = NULL;
struct Node{
    int data;
    struct Node *next;
};
void traversal(struct Node *ptr){
    cout<<"Printing the elements of this linked list\n";
    while (ptr != NULL)
    {
        cout<<"ELement : "<<ptr->data;
        ptr = ptr->next;
    }
}
void enqueue(int val)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if(n==NULL){
        cout<<"Queue is full\n";
    }else{
        n->data = val;
        n->next = NULL;
        if(f== NULL){
            f=r=n;
        }else{
            r->next = n;
            r=n;
        }
    }
}
int dequeue()
{
    int val = -1;
    struct Node *ptr = f;
    if(f == NULL){
        cout<<"Queue is empty\n";
    }else{
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}
int main()
{
    traversal(f);
    cout<<"Dequeuing element : "<<dequeue()<<endl;
    enqueue(34);
    enqueue(4);
    enqueue(7);
    enqueue(17);
    cout<<"Dequeuing element is : "<<dequeue()<<endl;
    cout<<"Dequeuing element is : "<<dequeue()<<endl;
    cout<<"Dequeuing element is : "<<dequeue()<<endl;
    cout<<"Dequeuing element is : "<<dequeue()<<endl;
    traversal(f);
    return 0;
}