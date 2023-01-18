#include <iostream>
using namespace std;
int main()
{
    int i, j, k, size, count = 0, position;
    cout << "Enter number of element : ";
    cin >> size;
    int a[size - 1], *temp;
    cout << "Enter number : ";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    temp = a;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size;)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < size; k++)
                {
                    a[k] = a[k + 1];
                }
                size--;
            }
            else
            {
                j++;
            }
        }
    }
    cout << "After removing repeted element \n";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
}