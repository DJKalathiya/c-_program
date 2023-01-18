#include<iostream>
using namespace std;
int main()
{
    int i,j,rows,sum;
    cout<<"Entr number of rows :";
    cin>>rows;
    for(int i=1; i<=rows; i++){
        sum=0;
        for(int j=1; j<=i; j++){
            sum+=j;
            if(j!=i){
                cout<<j<<" + ";
            }else{
                cout<<j<<" = ";
            }
        }
        cout<<sum;
        cout<<endl;
    }
}