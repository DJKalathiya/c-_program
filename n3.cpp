#include<iostream>
using namespace std;
int main(){
    int i,j,left,right,k,rightcount,count,rows;
    cout<<"Enter number of rows : ";
    cin>>rows;
    count=rows-1;
    left=1;
    right=0;

    for(int i=1; i<=rows; i++){
        for(int k=1; k<=count; k++){
            cout<<" ";
        }
        for(int j=i; j<=left; j++){
            cout<<j;
        }
        left+=2;
        if(i!=1){
            for(int j=right; j>=i; j--){
                cout<<j;
            }
        }
        right+=2;
        cout<<endl;
        count--;
    }
}