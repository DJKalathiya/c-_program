#include <iostream>
using namespace std;
int getFactorial(int number);
int main()
{
    int num,temp1,temp2,i,j,sum=0;
    cout<<"Enter any number : ";
    cin>>num;
    for(int i=1; i<=num; i++){
        sum=0;
        temp1=i;
        temp2=i;
        while (temp1>0)
        {
            j = temp1%10;
            sum += getFactorial(j);
            temp1 = temp1/10;
        }
        if(sum==temp2){
            cout<<sum<<endl;
        }
    }
}
int getFactorial(int number){
    int factorial=1,i;
    for(int i=1; i<=number; i++){
        factorial = factorial*i;
    }
    return factorial;
}