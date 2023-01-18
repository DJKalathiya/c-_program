#include<iostream>
#include<stdlib.h>
using namespace std;
void printArray(int* a, int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int partition(int a[], int low, int high){
    int pivot = a[low];
    int i = low + 1;
    int j = high;
    int temp;
    do{
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if(i<j){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }while(i<j);

    temp = a[low];
    a[low] = a[j];
    a[j] = temp;
    return j;
}
void quick(int a[], int low, int high){
    int partitonIndex;
    if(low<high){
        partitonIndex = partition(a,low,high);
        quick(a,low,partitonIndex-1);
        quick(a,partitonIndex+1, high);
    }
}
int main()
{
    int a[] = {12,43,4,7,54,8};
    int n = 6;
    printArray(a,n);
    quick(a,0,n-1);
    printArray(a,n);
    return 0;
}