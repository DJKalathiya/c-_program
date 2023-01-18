#include <iostream>
using namespace std;
void quick(int a[], int start, int end);
int main()
{
    int i, j, a[100], n;
    cout << "Enter number of element : ";
    cin >> n;
    cout << "Enter elements of array : \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quick(a, 0, n);
    cout << "array after sorting\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
}
void quick(int a[], int start,int end)
{
    int index=start, i,pivot=a[end],temp;
    if(start<end){
        for(int i=start; i<end; i++){
            if(a[i]<=pivot){
                temp=a[i];
                a[i]=a[index];
                a[index]=temp;
                index++;
            }
        }
        temp = a[index];
        a[index]=a[end];
        a[end]=temp;
        quick(a,start,index-1);
        quick(a,index+1,end);
    }
}