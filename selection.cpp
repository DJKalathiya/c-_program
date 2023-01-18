#include <iostream>
using namespace std;
void selection(int a[], int size);
int main()
{
    int i, j, size, n;
    cout << "Entr number of array element : ";
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    selection(a, size);
    cout << "in Acceding order : \n";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
}
void selection(int a[], int size)
{
    int temp, i, j, pointer;
    for (int i = 0 ; i < size - 1; i++)
    {
        pointer = i;
        for (int j = i + 1; j < size; j++)
        {
            if (a[pointer] > a[j])
            {
                pointer = j;
            }
            if (pointer != i)
            {
                temp = a[pointer];
                a[pointer] = a[i];
                a[i] = temp;
            }
        }
    }
}