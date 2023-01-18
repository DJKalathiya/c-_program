#include <iostream>
using namespace std;
int main()
{
    int i, n, flag = 0, search;
    cout << "Enter numbr of array : ";
    cin >> n;
    int a[n];
    cout << "Entr element of array \n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter which element you want to search : ";
    cin >> search;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == search)
        {
            flag=1;
        }
    }
    if(flag == 1){
        cout<<"element is searched\n";
    }
    else{
        cout<<"not searched\n";
    }
}