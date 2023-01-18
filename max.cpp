#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if ((a>b)&&(a>c))
    {
        cout<<"A is bigger"<<endl;
    }
    else if ((b>a)&&(b>c))
    {
        cout<<"B is bigger"<<endl;
    }
    else{
        cout<<"C is bigger"<<endl;
    }
    return 0;
}