#include<iostream>
#include<math.h>
using namespace std;
int  factorial(int);
int main()
{
    int i,n;
    float sum=0;
    cout<<"Enter value of n = ";
    cin>>n;

    for(int i=1; i<=n; i++){
        sum+=(float)(pow(i,i)/factorial(i));
    }
    cout<<"Sum is = "<<sum;
}
int factorial(int num){
    int i,fact=1;
    for(int i=1; i<= num; i++){
        fact = fact*i;
    }
    return fact;
}