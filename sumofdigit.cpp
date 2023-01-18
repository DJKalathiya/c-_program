#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int i,j=0,temp,sum=0,n;
    char str1[100], str2[100]={0};
    cout<<"Enter string : ";
    gets(str1);

    for(int i=0; i<strlen(str1); i++){
        if(str1[i]>='0' && str1[i]<='9'){
            str2[j]=str1[i];
            j++;
        }
    }
    temp = atoi(str2);
    cout<<"digit present in string is : "<<temp;
    while (temp>0)
    {
        n = temp%10;
        sum += n;
        temp = temp/10;
    }
    cout<<"\nThe sum of digit : "<<sum;

}