#include<iostream>
using namespace std;
int main()
{
    int n, fact=1,i;
    cout<<"Enter number : "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    cout<<"Factorial number is : "<<fact;
}