#include <iostream>
using namespace std;
int main()
{
    int i, j, k, rows, count, temp;
    cout << "Enter number of rows : ";
    cin >> rows;
    count = rows - 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int k = 1; k <= count; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        count--;
        cout << endl;
    }
    count = 1;
    for (int i = rows - 1; i >= 1; i--)
    {
        for(int k=1; k<=count; k++){
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        count++;
        cout << endl;
    }
}