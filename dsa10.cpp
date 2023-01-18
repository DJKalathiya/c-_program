#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};
struct Node *top = NULL;

void traversal(struct Node *ptr){
    while(ptr != NULL){
        cout<<"Element : "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
int isEmpty(struct Node *top){
    if(top == NULL){
        return 1;
    }else{
        return 0;
    }
}
int isFull(struct Node *top){
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if(p==NULL){
        return 1;
    }else{
        return 0;
    }
}
struct Node *push(struct Node *top, int x){
    if(isFull(top)){
        cout<<"Stack is overflow\n";
    }else{
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}
int pop(struct Node* tp){
    if(isEmpty(tp)){
        cout<<"Stack underflow\n";
    }else{
        struct Node *n = tp;
        top = (tp)->next;
        int x = n->data;
        free(n);
        return x;
    }
}
int peek(int pos){
    struct Node *ptr=top;
    for(int i=0; (i<pos-1 && ptr!=NULL); i++){
        ptr = ptr->next;
    }
    if(ptr!=NULL){
        return ptr->data;
    }else{
        return -1;
    }
}
int  main()
{
    top = push(top,45);
    top = push(top,53);
    top = push(top,99);
    top = push(top,1);

    traversal(top);
    for(int i=1; i<=4; i++){
        cout<<"Value at positiion "<<i<<" is : "<<peek(i)<<endl;
    }
    return 0;
}