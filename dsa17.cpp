#include<iostream>
#include<stdlib.h>
using namespace std;
void printArray(int* a, int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<endl;
    }
    cout<<endl;
}
void insertion(int *a, int n){
    int key, j;
    for(int i=1; i<=n-1; i++){
        key = a[i];
        j = i-1;
        while (j>=0 && a[j]>key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}
int main()
{
    int a[] = {12,43,4,7,54,8};
    int n = 6;
    printArray(a,n);
    insertion(a,n);
    printArray(a,n);
    return 0;
}