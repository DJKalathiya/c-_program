#include<iostream>
using namespace std;
int main()
{
    char s[100];
    int i,count=0;
    cout<<"Enter string to know how many vowel : ";
    cin>>s;
    for(int i=0; s[i] != '\0'; i++){
        if (s[i] == 'a' || s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' )
        {
            count++;
        }
    }
    if(count==0){
        cout<<"NO vowel in this string\n";
    }else{
        cout<<"in this string no of vowel are "<<count;
    }
}