#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,num1,num2,i,j,sum=0,series,diff,lastnum;
    cout<<"Enter first two number : "<<endl;
    cin>>num1;
    cout<<"Enter last number : ";
    cin>>n;
    cout<<"Enter differnece = ";
    cin>>diff;

    series = num1;
    lastnum = (float)(num1+((n-1)*diff));
    
    for(int i=1; i<=n; i++){
        sum+=series;
        series+=diff;
    }
    series = num1;
    cout<<"Terms in series is : "<<endl;
    for(int i=1; i<=n; i++){
        if(i<n){
            cout<<series<<", ";
            series+=diff;
        }else{
            cout<<series<<"Sum of series is = "<<sum;
            series+=diff;
        }
    }
}