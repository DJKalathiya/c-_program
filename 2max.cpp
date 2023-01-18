#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i, size, max, max2, position;
    cout << "Enter size of array : ";
    cin >> size;
    int a[size], temp[size - 1];
    cout << "Enter number in array : \n";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    max = a[0];
    position = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            position = i;
        }
    }
    for (int i = 0; i < size - 1; i++)
    {
        if (i < position)
        {
            temp[i] = a[i];
        }
        if (i >= position)
        {
            temp[i] = a[i + 1];
        }
    }
    max2 = temp[0];
    cout << endl;
    for (int i = 0; i < size - 1; i++)
    {
        if (temp[i] > max2)
        {
            max2 = temp[i];
        }
    }
    cout << "First largest number : " << max;
    cout << "SEcond largest number : " << max2;
}