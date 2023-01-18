#include <iostream>
using namespace std;
int getMin(int a[], int size, int min);
int main()
{
    int i, size, min;
    cout << "Enter number : ";
    cin >> size;
    int a[size];
    cout << "Enter number in array :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    min = getMin(a, size - 1, a[0]);
    cout << "Smallest number is = " << min;
}
int getMin(int a[], int size, int min)
{
    if (size >= 0)
    {
        if (a[size] < min)
        {
            min = a[size];
        }
        size--;
        getMin(a, size, min);
    }
    else
    {
        return (min);
    }
}