#include<iostream>
using namespace std;
int main()
{
    int dummy, n, rev=0, x;
    cin>>n;
    dummy=n;
    while (n>0)
    {
        x = n%10;
        rev = rev*10 +x;
        n = n/10;
    }
    if (dummy==rev)
    {
        cout<<"Palindrome number ";
    }
    else{
        cout<<"Number is not palindrome";
    }
}