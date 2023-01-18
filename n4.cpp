#include<iostream>
using namespace std;
int main()
{
    int i,j,k,rows,space,num=1;
    cout<<"Enter number of rows : ";
    cin>>rows;
    space = rows-1;
    for(int i=1; i<=2*rows-1; i++){
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        for(int k=1; k<=num; k++){
            cout<<k;
        }
        for(int k=num; k>=1; k--){
            cout<<k;
        }
        if(i<=rows-1){
            num++;
            space--;
        }
        else{
            space++;
            num--;
        }
        cout<<endl;
        
    }
}