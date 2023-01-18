#include <iostream>
#include <stdlib.h>
#include<string.h>
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
void push(struct stack *ptr, char val)
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
char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        cout << "stac undrflow!\n";
        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
char stackTop(struct stack *sp){
    return sp->arr[sp->top];
}
int match(char a, char b){
    if(a=='{' && b == '}'){
        return 1;
    }
    if(a=='(' && b == ')'){
        return 1;
    }
    if(a=='[' && b == ']'){
        return 1;
    }
    return 0;
}
int parenthesisMatch(char *exp){
    struct stack *sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char popped_ch;

    for(int i=0; exp[i] != '\0'; i++){
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '['){
            push(sp, exp[i]);
        }
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']'){
            if(isEmpty(sp)){
                return 0;
            }
            popped_ch = pop(sp);
            if(!match(popped_ch, exp[i])){
                return 0;
            }
        }
    }
    if(isEmpty(sp)){
        return 1;
    }else{
        return 0;
    }
}
int main()
{
    char *exp = "[4-6]((8){(9-8)})";
    if(parenthesisMatch(exp)){
        cout<<"Parenthesis is matching\n";
    }else{
        cout<<"Parenthesis is not matching\n";
    }
    return 0;
}