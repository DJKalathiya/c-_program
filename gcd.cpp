#include<iostream>
using namespace std;
int getGcd(int temp1,int temp2);
int main()
{
    int num1,num2,gcd,lcm,x;
    cout<<"Enter number 1 and 2 : "<<endl;
    cin>>num1>>num2;
    gcd = getGcd(num1, num2);
    lcm = (num1*num2)/gcd;
    cout<<"GCD is : "<<gcd;
    cout<<"LCM is : "<<lcm;
}
int getGcd(int temp1, int temp2){
    if(temp2 != 0){
        getGcd(temp2,temp1%temp2);
    }
    else{
        return(temp1);
    }
}