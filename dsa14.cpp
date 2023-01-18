#include<iostream>
#include<stdlib.h>
using  namespace std;
struct circular{
    int size;
    int f; 
    int r;
    int* arr;
};
int isEmpty(struct circular *q){
    if(q->r == q->f){
        return 1;
    }return 0;
}
int isFull(struct circular *q){
    if((q->r+1)%q->size == q->f){
        return 1;
    }
    return 0;
}
void enqueue(struct circular *q, int val){
    if(isFull(q)){
        cout<<"The queue is full\n";
    }else{
        q->r = (q->r+1)%q->size;
        q->arr[q->r] = val;
        cout<<"Enqued element is : "<<val<<endl;
    }
}
int dequeue(struct circular *q){
    int a = -1;
    if(isEmpty(q)){
        cout<<"This queue is empty\n";
    }else{
        q->f = (q->f+1)%q->size;
        a = q->arr[q->f];
    }
    return a;
}
int main(){
    struct circular q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));

    enqueue(&q, 12);
    enqueue(&q, 54);
    enqueue(&q, 98);
    
    cout<<"Dequeuing element is : "<<dequeue(&q)<<endl;
    cout<<"Dequeuing element is : "<<dequeue(&q)<<endl;
    cout<<"Dequeuing element is : "<<dequeue(&q)<<endl;

    enqueue(&q, 76);
    enqueue(&q, 75);
    enqueue(&q, 90);
    
    if(isEmpty(&q)){
        cout<<"It is empty\n";
    }
    if(isFull(&q)){
        cout<<"It is full\n";
    }
    return 0;
}