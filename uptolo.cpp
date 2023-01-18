#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i;
    char str1[100], str2[100]={0};
    cout<<"enter string : ";
    gets(str1);
    for(int i=0; i<strlen(str1); i++){
        if (str1[i] >= 'a'&& str1[i] <= 'z')      
        {   
            str2[i] = (char)str1[i] - 32;
        }
        else if (str1[i]>= 'A'&& str1[i] <='Z')
        {
            str2[i] = (char)str1[i] + 32;
        }
        else{
            str2[i] = str1[i];
        }
    }
    cout<<"The conerted sentence is : "<<str2;
}