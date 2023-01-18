#include<iostream>
#include<stdlib.h>
using namespace std;
void printArray(int *a, int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void merge(int a[], int mid, int low, int high)
{
    int i,j,k,b[100];
    i = low;
    j = mid + 1;
    k = low;

    while(i<=mid && j<=high){
        if(a[i]<a[j]){
            b[k] = a[i];
            i++;
            k++;
        }
        else{
            b[k] = a[j];
            j++;
            k++;
        }
    }
    while (i<= mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        b[k] = a[j];
        k++;
        j++;
    }
    for(int i=low; i<=high; i++)
    {
        a[i] = b[i];
    }
}
void mergeSort(int a[], int low, int high){
    int mid;
    if(low<high){
        mid = (low + high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        merge(a,mid,low,high);
    }
}
int main()
{
    int a[] = {5,9,7,1,23,5,4,6,9,53};
    int n = 10;
    printArray(a,n);
    mergeSort(a,0,10);
    printArray(a,n);
    return 0; 
}