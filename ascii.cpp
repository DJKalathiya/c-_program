#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i;
    char str[100];
    cout<<"Enter any string : ";
    gets(str);
    for(int i=0; i<strlen(str); i++){
        cout<<str[i]<<" -----> "<<str[i];
    }
}