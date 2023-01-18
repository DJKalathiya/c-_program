#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,j=1, term;
    cout<<"Enter total terms : ";
    cin>>term;
    for(int i=1; i<=term; i++){
        if(i%2==1){
            cout<<(-1*j)<<" ";
        }else{
            cout<<j;
        }
        j+=3;
    }
    cout<<endl;
}