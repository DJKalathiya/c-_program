#include<iostream>
using namespace std;
int main()
{
    int i,j,num;
    cout<<"Enter number of rows : ";
    cin>>num;
    for(int i=num; i>=1; i--){
        for(int j=i; j>=1; j--){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=num; i++){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}