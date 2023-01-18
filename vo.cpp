#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,vowel =0;
    char str[100];
    cout<<"Enter string : ";
    gets(str);
    for(int i=0; i<strlen(str); i++){
        if (str[i]=='a' || str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
        {
            vowel++;
        }
    }
    cout<<vowel;
}