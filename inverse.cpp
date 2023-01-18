#include<iostream>
using namespace std;
int main()
{
    int i,mi,num;
    cout<<"Enter any number : ";
    cin>>num;
    for(int i=1; i<=num; i++){
        mi = ((i*26)+1);
        if (mi%num==0)
        {
            break;
        }
    }
    mi = mi/num;
    cout<<"Multiplicative inverse is "<<mi<<endl;
}