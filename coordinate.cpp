#include<iostream>
using namespace std;
int main()
{
    float x,y;
    cout<<"Entr (x,y) : \n";
    cin>>x>>y;
    if (x>0 && y>0)
    {
        cout<<"In First quadrant\n";
    }
    if (x<0 && y>0)
    {
        cout<<"In second\n";
    }
    if (x<0 && y<0)
    {
        cout<<"Inn third\n";
    }
    if (x>0 && y<0)
    {
        cout<<"In fourth\n";
    }
    if(x==0 && y==0)
    {
        cout<<"Lies in Origin\n";
    }
}