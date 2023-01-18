#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float CI,p,r,t;
    int n;
    cout<<"Enter P,R,T : "<<endl;
    cin>>p>>r>>t;
    cout<<"Enter number of times interst per year : "<<endl;
    cin>>n;
    CI = (float)(p*(pow((1+(r/(100*n))),(n*t))));
    cout<<"CI is : "<<CI;
}