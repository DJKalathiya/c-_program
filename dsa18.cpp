#include<iostream>
#include<stdlib.h>
using namespace std;
void printArray(int* a, int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void selection(int *a, int n){
    int indexOfMin,temp;
    cout<<"Running selection sort...\n";
    for(int i=0; i<n-1; i++){
        indexOfMin = i;
        for(int j=i+1; j<n; j++){
            if(a[j] < a[indexOfMin]){
                indexOfMin = j;
            }
        }
        temp = a[i];
        a[i] = a[indexOfMin];
        a[indexOfMin] = temp;
    }
}
int main()
{
    int a[] = {12,43,4,7,54,8};
    int n = 6;
    printArray(a,n);
    selection(a,n);
    printArray(a,n);
    return 0;
}