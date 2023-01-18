#include <iostream>
using namespace std;
int main()
{
    int num, i, count = 0, j, maxprime = 1;
    cout << "ENter number is : ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        count = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            if (maxprime < i)
            {
                maxprime = i;
            }
        }
    }
    cout << "maxprime number is : " << maxprime;
}