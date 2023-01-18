#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,size,position,delitem,flag=0;
    cout<<"Enter size : ";
    cin>>size;
    int a[size],temp[size-1];
    cout<<"Enter element of array : ";
    for(int i=0; i<size; i++){
        cin>>a[i];
    }
    cout<<"Enter element ot be deleted : ";
    cin>>delitem;
    for(int i=0; i<size; i++){
        if(a[i]==delitem){
            position=i;
            flag=1;
        }
    }
    if(flag==1){
        for(int i=0; i<size-1; i++){
            if(i<position){
                temp[i]=a[i];
            }
            if(i>=position){
                temp[i]=a[i+1];
            }
        }
        cout<<"\nArray after deleting element : "<<delitem;
        for(int i=0; i<size-1; i++){
            cout<<temp[i]<<endl;
        }
    }
    else{
        cout<<"Number not found\n";
    }

}