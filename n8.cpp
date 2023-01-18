#include<iostream>
using namespace std;
int main()
{
    int i,j,num,k,count;
    cout<<"Enter number of rows : ";
    cin>>num;
    count=num-1;
    for(int i=1; i<=num; i++){
        for(int k=1; k<=count; k++){
            cout<<" ";
        }
        for(int j=i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
        count--;
    }
}