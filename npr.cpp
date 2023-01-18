#include<iostream>
#include<math.h>
using namespace std;
int fact(int);
int main()
{
    int n,r;
    float nCr;
    cout<<"Entr value of n and r : ";
    cin>>n>>r;

    if(n>=r && n>=0&& r>=0){
        nCr =(float)fact(n)/(fact(n-r)*fact(r));
        cout<<"nCr is : "<<nCr;
    }
    else{
        cout<<"Invalid entry\n";
    }
}
int fact(int num){
    int i , fact=1;
    for(int i=1; i<=num; i++){
        fact = fact*i;
    }
    return (fact);
}