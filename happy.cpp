#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,j,num,happy,temp,sum=0;
    cout<<"Enter number till you want yo print number : ";
    cin>>happy;
    for(int i=1; i<=happy; i++){
        sum=0;
        num=i;
        temp=num;
        while (sum!=1 && sum!=4)
        {
            sum=0;
            while (num>0)
            {
                j=num%10;
                sum+=(j*j);
                num=num/10;
            }
            num=sum;
        }
        if(sum==1){
            cout<<i<<endl;
        }
    }
}