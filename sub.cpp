#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,j,flag=0,len1,len2;
    char str[100], substr[100];
    cout<<"Enter string : ";
    gets(str);
    cout<<"Enter substring : ";
    gets(substr);
    len1 = strlen(str);
    len2 = strlen(substr);
    for(int i=0; i<len1-len2; i++){
        for(int j=1; j<len2+i; j++){
            flag=1;
            if(str[j]!= substr[j-1]){
                flag=1;
                break;
            }
        }
        if(flag == 1)
        break;
    }
    if(flag==1){
        cout<<"serch\n";
    }else{
        cout<<"Not serch\n";
    }
}