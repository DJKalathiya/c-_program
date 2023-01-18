#include<iostream>
using namespace std;
int sum(int a, int b){
    int c = a+b;
    return c;
}
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}
void swapReference(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}
void swapPointer(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x=4,y=5;
    cout<<"The value of x is "<<x<<" and y is "<<y<<endl;
    //swap(x,y);
    //swapPointer(&x, &y);
    swapReference(x,y);

    cout<<"The value of x is "<<x<<" and y is "<<y<<endl;
}