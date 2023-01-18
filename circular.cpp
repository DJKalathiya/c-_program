#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,j,rep;
    char str[100];
    cout<<"Enter sentence : ";
    gets(str);
    cout<<"Enter number of times it should repeted : ";
    cin>>rep;
    for(int i=0; i<rep; i++){
        char c=str[0];
        for(j=0; str[j]!='\0'; j++){
            if (str[j+1] != '\0')
            {
                str[j] = str[j+1];
            }
            else{
                break;
            }
        }
        str[j] = c;
        str[j+1] = '\0';
    }
    cout<<str<<endl;
}