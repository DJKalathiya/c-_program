#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, j, k, n, l;
    cout << "Enter the value of number between 1 to 9 : ";
    cin >> n;
    if (n <= 9)
    {
        for (int i = 1; i <= n; i++)
        {
            for (j = 1; j <= (n + 1) - i; j++)
            {
                cout << i << endl;
            }
        }
        for (k = n; k >= 1; k--)
        {
            
            for (int l = k; l <= n; l++)
            {
                cout << (n + 1) - l;
            }
        }
    }
    else
    {
        cout << "The number is grater than 9 ";
    }
    getch();
}