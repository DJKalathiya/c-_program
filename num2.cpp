#include<iostream>
using namespace std;
int main()
{
    int i,j,k,rows,count,temp;
    cout<<"Etnr number of rows : ";
    cin>>rows;
    count=rows-1;
    
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=count; j++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<i;
        }
        count--;
        cout<<endl;
    }
    count=1;
    for(int i=rows-1; i>=1; i--){
        for(int k=1; k<=count; k++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<i;
        }
        count++;
        cout<<endl;
    }
}