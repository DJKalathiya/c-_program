#include<iostream>
using namespace std;
int main()
{
    int i,j,k,rows,count,temp=1;
    cout<<"Entr number of rows : ";
    cin>>rows;
    count= rows-1;
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=count; j++){
            cout<<" ";
        }
        for(int k=1; k<=temp; k++){
            cout<<i;
        }
        count--;
        temp+=2;
        cout<<endl;
    }
}