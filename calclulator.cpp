#include<iostream>
using namespace std;
int main()
{
    float p,r,t,simple;
    int choice;
    cout<<"Enter 1 for simpleinterst\n : ";
    cin>>choice;
    switch(choice){
        case 1 :
        {
            cout<<"Enter p,r,years : ";
            cin>>p>>r>>t;
            simple = (float)(p*r*t)/100.0;
            cout<<"simple interst is : "<<simple;
            break;
        }
        default:
        {
            cout<<"Error\n";
            break;
        }
    }
}