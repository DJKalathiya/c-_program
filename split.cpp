#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
    int i=0,j=0,k=0;
    char str1[100] = {0}, substr[100][100] = {0},c;
    cout<<"Enter sentence : ";
    gets(str1);
    cout<<"ENter char to split : ";
    cin>>c;
    while (str1[k]!='\0')
    {
        j=0;
        while(str1[k]!=c && str1[k]!='\0'){
            substr[i][j]=str1[k];
            k++;
            j++;
        }
        substr[i][j]='\0';
        i++;
        if(str1[k]!='\0'){
            k++;
        }
    }
    int len=i;
    cout<<"\nwords after spliting : \n";
    for(int i=0; i<len; i++){
        cout<<substr[i];
        
    }
}