#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,count=0;
    char c,str[100];
    cout<<"Enter string : ";
    gets(str);
    cout<<"Which char you want to find : ";
    cin>>c;

    for(int i=0; i<strlen(str); i++){
        if(str[i]==c){
            count++;
        }
    }
    cout<<"LEtter repeted is time : "<<count;
}