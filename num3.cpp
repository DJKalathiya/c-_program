#include<iostream>
using namespace std;
int main()
{
    int i,j,k,rows,count,temp,start;
    cout<<"Enter number of rows : ";
    cin>>rows;
    count=1;
    temp = 1+(rows-1)*2;
    for(int i=1; i<=rows; i++){
        start=1;
        for(int j=1; j<=count; j++){
            cout<<" ";
        }
        for(int k=temp; k>=1; k--){
            cout<<start;
            start++;
        }
        count++;
        temp-=2;
        cout<<endl;
    }
}