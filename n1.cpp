#include <iostream>
using namespace std;
int main()
{
    int i, j, k = 1, row;
    cout << "Enter number of rows : ";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
}