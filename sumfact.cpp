#include <iostream>
#include <math.h>
using namespace std;
int factorial(int);
int main()
{
    int i, j, num;
    float sum = 0;
    cout << "Enter number : ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        sum += (float)i
         / factorial(i);
    }
    cout << "Sum and answer is " << endl;
    for (int i = 1; i <= num; i++)
    {
        if (i < num)
        {
            cout << "1/" << i << "! + ";
        }
        else
        {
            cout << "1/" << i << "! = ";
        }
    }
    cout << sum;
}
int factorial(int n)
{
    int i, fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}