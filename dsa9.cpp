#include <iostream>
#include <stdlib.h>
using namespace std;
struct stack
{
    int size;
    int top;
    int *arr;
};
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        cout << "Stack is overflow!\n";
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        cout << "stac undrflow!\n";
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int peek(struct stack *sp, int i)
{
    int arrayINd = sp->top - i + 1;
    if (arrayINd < 0)
    {
        cout << "Not valid position\n";
        return -1;
    }
    else
    {
        return sp->arr[arrayINd];
    }
}
int stackTop(struct stack *sp){
    return sp->arr[sp->top];
}
int stackBottom(struct stack *sp){
    return sp->arr[0];
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    cout << "Successfullu created\n";

    cout<<"Before pushing, Full : "<<isFull(sp)<<endl;
    cout<<"Before pushing, empty : "<<isEmpty(sp)<<endl;

    push(sp,1);
    push(sp,2);
    push(sp,4);
    push(sp,6);
    push(sp,8);
    push(sp,9);
    push(sp,17);
    
    cout<<"The top most value is : "<<stackTop(sp)<<endl;
    cout<<"The Bottom most value is : "<<stackBottom(sp);
    return 0;
}