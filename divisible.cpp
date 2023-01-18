#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,a,b;
    cout<<"Enter number a and b : "<<endl;
    cin>>a>>b;
    for (int i=a; i<=b; i++)
    {
        if(i%2==0)
        {
            sum += i;
        }
    }
    cout<<"Sum all number betwen a and b : "<<sum<<endl;
}