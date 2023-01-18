#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i,num,sum=0;
    cout<<"ENter number = ";
    cin>>num;
    for(int i=1; i<=num; i++){
        if(i%2==0){
            sum-=pow(i,2);
        }
        if(i%2==1){
            sum+=pow(i,2);
        }
    }
    cout<<sum;
}