#include<iostream>
#include<stdlib.h>
using namespace std;
struct queue{
    int size;
    int f;
    int r;
    int *arr;
};
int isEmpty(struct queue *q){
    if(q->r == q->f){
        return 1;
    }
    return 0;
}
int isFull(struct queue *q){
    if(q->r == q->size-1){
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q, int val){
    if(isFull(q)){
        cout<<"IT is full\n";
    }else{
        q->r++;
        q->arr[q->r] = val;
        cout<<"Enqued element : "<<val<<endl;
    }
}
int dequeue(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        cout<<"it is empty\n";
    }else{
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}
int main()
{
    struct queue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));

    enqueue(&q, 12);
    enqueue(&q, 53);
    enqueue(&q, 97);
    cout<<"Dequeueing element is : "<<dequeue(&q)<<endl;
    cout<<"Dequeueing element is : "<<dequeue(&q)<<endl;
    cout<<"Dequeueing element is : "<<dequeue(&q)<<endl;
    
    if(isEmpty(&q)){
        cout<<"Queue is empty\n";
    }
    else if(isFull(&q)){
        cout<<"Queue is full\n";
    }
    return 0;
}