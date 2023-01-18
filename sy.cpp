#include<iostream>
using namespace std;
int main()
{
    int i,j,k,count,number;
    cout<<"Enter number of rows : ";
    cin>>number;
    count=number-1;
    for(int i=1; i<=2*(number)-1;i+=2){
        for(int k=1;k<=count; k++){
            cout<<" ";
        }
        count--;
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    count=1;
    for(int i=2*(number)-1; i>=1; i-=2){
        if(i!=(2*(number)-1)){
            for(int k=1; k<=count; k++){
                cout<<" ";
            }
            count++;
            for(int j=i; j>=1; j--){
                cout<<"*";
            }
            cout<<endl;
        }
    }
}