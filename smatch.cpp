#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int i, j, flag;
    char s1[100], s2[100];
    cout << "Enter s1 : ";
    gets(s1);
    cout << "Enter s2 : ";
    gets(s2);
    for (int i = 0; i < strlen(s1); i++)
    {
        flag = 0;
        for (int j = 0; j < strlen(s2); j++)
        {
            if (s1[i] == s2[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag != 1)
        {
            cout << "Charcter is not matching\n";
            exit(0);
        }
    }
    cout << "All charcter are matching\n";
    return 0;
}