#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int i, j, size, max;
    cout << "Enter size of array \n";
    cin >> size;
    int *a = (int *)malloc(size * sizeof(int));
    cout << "Enter element :\n";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    max = a[0];
    for (int i = 0; i < size; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    max += 1;
    int b[max];
    a = (int *)realloc(a, max * sizeof(int));
    for (int i = 0; i <= max; i++)
    {
        b[i] = 0;
        if (i >= size)
        {
            a[i] = 0;
        }
    }
    for (int i = 0; i <= max; i++)
    {
        if (a[i] != 0)
        {
            b[a[i]] = b[a[i]] + 1;
        }
    }
    cout << "numbers repeted odd numbers of times \n";
    for (int i = 0; i <= max; i++)
    {
        if (b[i] != 0)
        {
            cout << i << " repeated " << b[i] << " times\n";
        }
    }
}