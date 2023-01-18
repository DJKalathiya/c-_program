#include<iostream>
using namespace std;
int main()
{
    int i,j,k,rows,count,temp,a=1,total=0;
    cout<<"Enter number of rows : ";
    cin>>rows;
    count=1;
    temp=1+(rows-1)*2;
    for(int i=0; i<rows; i++){
        if(i!=0){
            a+=2;
        }
        total+=a;
    }
    for(int i=1; i<rows; i++){
        for(int j=1; j<=count; j++){
            cout<<" ";
        }
        for(int k=temp; k>=1; k--){
            cout<<total%2;
            total--;
        }
        count++;
        temp-=2;
        cout<<endl;
    } 
}