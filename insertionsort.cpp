#include <iostream>
using namespace std;
void insertion(int a[], int size);
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

    insertion(a, size);
    cout << "in Acceding order : \n";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }
}
void insertion(int a[], int size)
{
    int temp, i, j;
    for (int i = 1; i<size; i++)
    {
        j = i;
        while ((a[j] < a[j - 1]) && j > 0)
        {
            temp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = temp;
            j--;
        }
    }
}