#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,sum;
    cout<<"Enter value of a and b : "<<endl;
    cin>>a>>b;
    sum = pow(a,2)+ sqrt(a*b)+pow(b,2);
    cout<<sum;
}