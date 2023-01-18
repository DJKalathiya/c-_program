#include<iostream>
using namespace std;
int main()
{
    int dummy,n,sum=0,x;
    cout<<"ENter number : ";
    cin>>n;
    dummy=n;
    while(n>0){
        x = n%10;
        sum = sum+x;
        n = n/10;
    }
    cout<<"Sum of this number : "<<sum;
}
