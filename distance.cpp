#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c;
    double A,B,C;
    const double PI = 3.1415;
    cout<<"Enter length of a,b,c : "<<endl;
    cin>>a>>b>>c;
    A = acos((-pow(a,2)+pow(b,2)+pow(c,2))/(2*b*c));
    B = acos((pow(a,2)-pow(b,2)+pow(c,2))/(2*a*c));
    C = acos((pow(a,2)+pow(b,2)-pow(c,2))/(2*b*a));
    A*= 180/PI;
    B*= 180/PI;
    C*= 180/PI;
    cout<<A;
    cout<<B;
    cout<<C;
}