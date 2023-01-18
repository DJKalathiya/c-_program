#include <iostream>
using namespace std;
int main()
{
    int i, j, k, sum, rows, count;
    cout << "Entr number of rows : ";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        count = rows * 3;
        count -= (i)*3;
        for (int k = count; k >= 1; k--)
        {
            cout << " ";
            sum = i;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << sum << "   ";
            sum = sum + (i - 1);
        }
        cout << endl;
    }
}