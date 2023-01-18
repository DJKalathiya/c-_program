#include<iostream>
#include<stdlib.h>
using namespace std;
void printArray(int* A, int n)
{
    for(int i=0; i<n; i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}
void bubbleSort(int* A, int n){
    int temp;
    int isSorted = 0;
    for(int i=0; i<n-1; i++){
        cout<<"Working on pass number "<<(i+1)<<endl;
        for(int j=0; j<n-1-i; j++){
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}
void bubbleAdaptive(int *A, int n){
    int temp;
    int isSorted = 0;
    for(int i=0; i<n-1; i++){
        cout<<"Working on pass number : "<<(i+1)<<endl;
        isSorted = 1;
        for(int j=0; j<n-1-i; j++){
            if(A[j]>A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                isSorted = 0;
            }
        }if(isSorted){
            return;
        }
    }
}
int main()
{
    int A[] = {1,2,8,8,3,6,9,7,65,46};
    int n=10;
    printArray(A,n);
    bubbleAdaptive(A,n);
    printArray(A,n);
    return 0;
}