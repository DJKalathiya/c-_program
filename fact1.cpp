#include<iostream>
using namespace std;
int getfact(int number);
int main()
{
    int number,fact;
    cout<<"Enter number for factorial = ";
    cin>>number;
    fact = getfact(number);
    cout<<fact;
}
int getfact(int number){
    if(number>0){
        return number*getfact(number-1);
    }
    else{
        return 1;
    }
}