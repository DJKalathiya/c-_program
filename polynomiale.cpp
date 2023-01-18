#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float x, sum=0;
    int order,i;
    cout<<"Value of x : ";
    cin>>x;
    cout<<"Enter order : ";
    cin>>order;
    float co[order];

    for(int i=0; i<=order; i++){
        cout<<"Enter coefficient of polynomial at x^"<<i<<endl;
        cin>>co[i];
    }
    for(int i=0; i<=order; i++){
        sum += co[i]*pow(x,i);
    }
    for(int i=order; i>=0; i--){
        if(i>0){
            cout<<co[i]<<"x^"<<i<<"+ ";
        }else{
            cout<<co[i]<<"x^"<<i<<" = ";
        }
    }
    cout<<sum<<endl;
}