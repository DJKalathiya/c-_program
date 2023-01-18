#include <iostream>
using namespace std;
int linear(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return 1;
        }
    }
    return -1;
}
int binary(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {45,67,13,79,1,3,5,79,4,2,97};
    int size = sizeof(arr) / sizeof(int);
    int element = 3;
    int search = linear
    (arr, size, element);
    cout << "Element fount at index " << search;
    cout << endl;
    return 0;
}