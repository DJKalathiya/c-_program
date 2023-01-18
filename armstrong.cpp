#include<iostream>
using namespace std;
int main()
{
    int num,i,j,temp1,temp2,sum=0;
    cout<<"ENter number to know all armstrong : ";
    cin>>num;
    cout<<"All armstrong number : "<<endl;
    for (int i=1; i<=num; i++)
    {
        sum=0;
        temp1 = i;
        temp2=i;
        while(temp1>0){
            j=temp1%10;
            sum += j*j*j;
            temp1 = temp1/10;
        }
        if (sum==temp2)
        {
            cout<<sum<<endl;
        }   
    }   
}   
