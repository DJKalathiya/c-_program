#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,num,c,count;
    cout<<"Enter number : ";
    cin>>num;
    cout<<endl<<"This series is : "<<endl;
    cout<<a<<endl<<b<<endl;
    count=2;
    while (count<num)
    {
        c = a+b;
        a=b;
        b=c;
        cout<<c<<endl;
        count++;
    }
    
}