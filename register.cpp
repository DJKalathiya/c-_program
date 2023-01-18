#include<iostream>
using namespace std;
int main()
{
    register int i;
    int j;
    for(int i=1;i<10; i++)
    {
        for(int j=i; j<10; j++){
            cout<<j;
        }
        cout<<endl;
    }
}