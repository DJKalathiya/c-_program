#include <iostream>
using namespace std;
void sortb(int a[], int num);
int main()
{
    int i, j, num, temp;
    cout << "Enter number of array element : ";
    cin >> num;
    int a[num];
    cout << "Enter array element \n";
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    sortb(a, num);
    cout << "sorted order is :" << endl;
    for (int i = 0; i < num; i++)
    {
        cout << a[i]<<endl;
    }
}
void sortb(int a[], int num)
{
    int i, j, temp;
    i = num;
    if (i > 0)
    {
        for (int j = 0; j < num - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        sortb(a, num - 1);
    }
    else
    {
        return;
    }
}