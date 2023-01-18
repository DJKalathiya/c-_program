#include<iostream>
using namespace std;
int main()
{
    int i,j,k,count,n;
    cout<<"enter number of rows : ";
    cin>>n;
    count = n-1;
    for(int i=1; i<=2*(n)-1; i+=2){
        for(int k=1; k<=count; k++){
            cout<<" ";
        }
        count--;
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }
    count=1;
    for(int i=2*(n)-1; i>=1; i-=2){
        if(i!=(2*(n)-1)){
            for(int k=1; k<=count; k++){
                cout<<" ";
            }
            count++;
            for(int j=1; j<=i; j++){
                cout<<j;
            }
            cout<<endl;
        }
    }
}