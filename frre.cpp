#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,k=0,count[26]={0},x;
    char str[100];
    cout<<"Enter sentence : ";
    gets(str);
    while (str[k] != '\0')
    {
        if(str[k]>='a' && str[k]<= 'z'){
            x = str[k] - 'a';
            count[x]++;
        }
    }
    k++;
    for(int i=0; i<26; i++){
        if(count[i]!=0){
            cout<<(i+'a')<<" occured "<<count[i]<<" times\n";
        }
    }
}