#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main()
{
    int i = 0,j, totChar = 0, flag = 0, c;
    char str[100];
    cout << "Enter string : ";
    cin >> str;
    int len = strlen(str);
    j = len - 1;

    while (i < j)
    {
        if (str[i] == str[j])
        {
            i++;
            j--;
            flag = 1;
        }
        else
        {
            totChar++;
            i++;
            flag = 0;
        }
    }
    if (flag != 1)
    {
        totChar = len - 1;
        c = totChar - 1;
        cout << "Total charcter required = " << totChar;
    }
    for (int i = 0; i < totChar; i++)
    {
        str[len + i] = str[c--];
    }
    str[len + i] = '\0';
    cout << "\nFinal stirng is " << str;
}