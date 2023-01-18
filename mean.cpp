#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,j,term;
    float mean,sum=0.0,num;
    cout<<"Enter total term : ";
    cin>>term;
    cout<<"Enter number : "<<endl;
    for(int i=0; i<term; i++){
        cin>>num;
        sum += num;
    }
    mean = (float)(sum/term);
    cout<<"MEan is : "<<mean;
}