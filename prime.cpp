#include <iostream>
using namespace std;
int main()
{
    int i, j, num, sum = 0;
    cin >> num;
    cout << "All prime number are " << endl;
    for (int i = 1; i <= num; i++)
    {
        sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
           
                 sum += j;
            }
        }
        if (sum == i)
        {
            cout << i << endl;
        }
    }
}