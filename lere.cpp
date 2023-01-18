#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,k=0,count[26] = {0},x;
    char str1[100];
    cout<<"Enter sentence : ";
    gets(str1);
    while (str1[k]!='\0')
    {
        if(str1[k]>='a' && str1[k]<='z'){
            x = str1[k]- 'a';
            count[x]++;
        }
        k++;
    }
    int max = count[0];
    for(int i=0; i<26; i++){
        if (count[i]>max)
        {
            max = count[i];
        }
    }
    cout<<"letters which are repeted more numbers of times \n";
    for(int i=0; i<26; i++){
        if(count[i]==max && count[i]!=0){
            cout<<(i+'a')<<" occured "<<count[i]<<" times\n";
        }
    }
}