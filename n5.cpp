#include<iostream>
using namespace std;
int main()
{
    int i,j,k,rows,count;
    long x;
    cout<<"Entr number of rows : ";
    cin>>rows;
    count= rows-1;
    for(int i=0; i<rows; i++){
        x=1;
        for(int k=0; k<=count; k++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<x<<" ";
            x = (x*(i-j)/(j+1));
        }
        count--;
        cout<<endl;
    }
}