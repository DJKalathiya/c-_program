#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int i, temp, num, j, power;
    cout << "Enter number : ";
    cin >> num;
    cout << "Enter power of number : ";
    cin >> power;
    temp = num;
    if (num == 0 || num == 1)
    {
        cout << "Please enter valid number" << endl;
    }
    while (num > 1)
    {
        if (num % power != 0)
        {
            cout << "Sorry this is not valid number" << endl;
            return 0;
        }
        num = num / power;
    }
    cout << "YEs this is power of number" << endl;
    return 0;
}