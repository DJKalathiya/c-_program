#include<iostream>
using namespace std;
void hello();
int main()
{
    int i=4;
    {
        int i=5;
        cout<<"Inside function "<<i<<endl;
        {
            int i=1;
            cout<<"Inside function "<<i<<endl;
        }
    }
    hello();
    cout<<"Inside function "<<i;
}
void hello()
{
    int i=9;
    cout<<"In hello function "<<i<<endl;
}