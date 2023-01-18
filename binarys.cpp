#include <iostream>
using namespace std;
void sort(int, int *);
void binarysearch(int, int, int *, int);
int main()
{
    int i, n, searchno;
    cout << "Enter size of array : ";
    cin >> n;
    int a[n];
    cout << "Enter number in sorted order : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(n, &a[0]);
    cout << "sorted array is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    cout << "Enter element to be searched \n";
    cin >> searchno;
    binarysearch(1, n, &a[0], searchno);
}
void sort(int n, int *a)
{
    int i, j, temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void binarysearch(int low, int high, int *a, int searchno)
{
    int mid;
    if (low > high)
    {
        cout << "Search is not successful\n";
        return;
    }
    mid = (low + high) / 2;
    if (a[mid] == searchno)
    {
        cout << "searched" << endl;
        return;
    }
    else if (searchno < a[mid])
    {
        binarysearch(low, mid - 1, a, searchno);
    }
    else if (searchno > a[mid])
    {
        binarysearch(mid + 1, high, a, searchno);
    }
}