#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int dec,temp,i,j=1,binary=0;
    cout<<"Enter only number : ";
    cin>>dec;
    temp=dec;
    while (temp!=0)
    {
        i=temp%2;
        binary = binary+(i*j);
        temp = temp/2;
        j = j*10;
    }
    cout<<"Binary number is : "<<binary;
    
}