#include<iostream>
using namespace std;
int main()
{
    int i,n,sum=0,*ptr;
    cout<<"Enter number \n";
    cin>>n;
    int var[n-1];
    cout<<"Enter values in array\n";
    for(int i=0; i<n; i++){
        cin>>var[i];
    }
    ptr = &var[0];
    for(int i=0;i<n;i++){
        sum+=*ptr;
        ptr++;
    }
    cout<<"Sum = "<<sum<<endl;
}