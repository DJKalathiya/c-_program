#include<iostream>
using namespace std;
int main()
{
    int i,j,size,c=2;
    cout<<"Entr size of rows : ";
    cin>>size;
    cout<<endl;
    for(int i=1; i<=size; i++){
        for(int j=1; j<=c; j++){
            cout<<"* ";
        }
        if(i%2==0){
            c+=2;
        }
        cout<<endl;
    }
}