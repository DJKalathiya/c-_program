#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,n,sum=0,lastnum,ratio,series,num1,num2;
    cout<<"Enter first two number : ";
    cin>>num1>>num2;
    cout<<"Enter total terms : ";
    cin>>n;
    ratio = num2/num1;
    cout<<"Ratio is : "<<ratio<<endl;
    lastnum = (num1*(1-pow(ratio,(n-1))));
    cout<<"Last term in series is : "<<lastnum<<endl;
    sum = (num1*(pow(ratio,n)))/(1-ratio);
    series = num1;
    cout<<"sum of series is : "<<endl;
    for(int i=1; i<=n; i++){
        if(i<n){
            cout<<series<<" + ";
            series*=ratio;
        }else{
            cout<<series<<" = "<<sum<<endl;
            series*=ratio;
        }
    }
}