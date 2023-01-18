#include<iostream>
using namespace std;
int main()
{
    int i,n,j,temp;
    cout<<"Enter number of array element : ";
    cin>>n;
    int a[n];
    cout<<"Enter element of array : ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<"In acceding order \n";
    for(int i=0; i<n; i++){
        cout<<a[i]<<endl;
    }
}