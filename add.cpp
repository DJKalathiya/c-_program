#include<iostream>
using namespace std;
int main()
{
    int a,b,i,mul=0;
    cin>>a>>b;
    if (b<0)
    {
        a = a+b;
        b = a-b;
        a = a-b;
    }
    if (a>=0)
    {
        for (int i = 1; i <= a; i++)
        {
            mul+=b;
        }
    }
    if(a<0){
        for (int i = 1; i <= -1; i++)
        {
            mul-=b;
        }
    }
    cout<<endl;
    cout<<mul;
}