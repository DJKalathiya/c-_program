#include<iostream>
using namespace std;
int main()
{
    int i,j,k=0,space=1,size;
    cout<<"Entr number of rows : ";
    cin>>size;
    for(int i=size; i>=1; i--){
        for(int j=1; j<=i; j++){
            cout<<i;
        }
        if(i!=size){
            for(int k=1; k<=space; k++){
                cout<<" ";
            }
            space+=2;
        }
        for(int j=i; j>=1; j--){
            if(j!=size){
                cout<<i;
            }
        }
        cout<<endl;
    }
    space-=4;
    for(int i=2; i<=size; i++){
        for(int j=1; j<=i; j++){
            cout<<i;
        }
        if(i!=size){
            for(int k=1; k<=space; k++){
                cout<<" ";
            }
            space-=2;
        }
        for(int j=i; j>=1; j--){
            if(j!=size){
                cout<<i;
            }
        }
        cout<<endl;
    }
}