#include<iostream>
using namespace std;
int main()
{
    int  year;
    /* cout<<"ENter year you want to search : ";
    cin>>year; */
    year = 2018;
    if (year%400==0)
    {
        cout<<"This is leap year"<<endl;
    }
    else if (year%100==0)
    {
        cout<<"This year is not leap";
    }
    else if (year%4==0)
    {
        cout<<"This is leap year";
    }
    else{
        cout<<"this is not leap year";
    }
    cout<<endl;
}