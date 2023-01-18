#include<iostream>
using namespace std;
int main()
{
    char str[100];
    int i,len=0;
   cout<<"ENter string : ";
   cin>>str;
   for(int i=0;  str[i] !=0; i++){
       len++;
   }
   cout<<"The length is : "<<len;
};
