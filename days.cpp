#include<iostream>
using namespace std;
int main()
{
    int day,year,week,noday;
    cout<<"Enter number of days :"<<endl;
    cin>>noday;
    year = noday/365;
    week = (noday%365)/7;
    day = (noday%365)%7;
    cout<<day<<endl<<week<<endl<<year<<endl;
}