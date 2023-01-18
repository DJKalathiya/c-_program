#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,j=0;
    char str1[100], str2[100]={0};
    cout<<"Enter string to know : ";
    gets(str1);
    for(i=strlen(str1)-1; i>=0; i--){
        str2[j]=str1[i];
        j++;
    }
    str2[j] = '\0';
    cout<<"The revere of the string is ---> "<<str2;
}