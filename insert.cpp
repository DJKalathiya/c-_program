#include<iostream>
using namespace std;
int main()
{
    int i,size,position,in;
    cout<<"Enter size : ";
    cin>>size;
    int a[size],temp[size-1];
    cout<<"Enter element of array : ";
    for(int i=0; i<size; i++){
        cin>>a[i];
    }
    cout<<"Enter element to be searched : ";
    cin>>in;
    cout<<"Entr element for position : ";
    cin>>position;
    position = position-1;
    for(int i=0;i<=size;i++){
        if(i<position){
            temp[i]=a[i];
        }
        if(i>position){
            temp[i]=a[i-1];
        }
        if(i==position){
            temp[i]=in;
        }
    }
    cout<<"Array after inserting "<<in<<endl;
    for(int i=0; i<=size; i++){
        cout<<temp[i]<<endl;
    }
}