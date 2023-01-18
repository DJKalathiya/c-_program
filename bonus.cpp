#include<iostream>
using namespace std;
int main()
{
    int i,j;
    float salary, bonus;
    char gender;

    cout<<" ENter M or F for male and female :"<<endl;
    cin>>gender;
    cout<<"ENter salary : ";
    cin>>salary;

    if (gender=='m')
    {
        if (salary>1000)
        {
            bonus = (float)(salary*0.05);
        }
        else{
            bonus = (float)(salary*0.07);
        }
    }
    if (gender=='f')
    {
        if (salary>1000)
        {
            bonus = (float)(salary*0.1);
        }
        else{
            bonus = (float)(salary*0.12);
        }
    }
    salary+=bonus;
    cout<<bonus<<endl;
    cout<<salary<<endl;
}