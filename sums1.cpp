#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i, j, num;
    float sum = 0;
    cout << "Enter number : ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        sum += (float)1/i;
    }
    cout << "Sum and series is :" << endl;
    for (int i = 1; i <= num; i++)
    {
        if (i < num)
        {
            cout << "1/" << i << " + ";
        }
        else
        {
            cout << "1/" << i << " = ";
        }
    }
    cout<<sum;
}