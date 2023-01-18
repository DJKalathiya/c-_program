#include <iostream>
using namespace std;
int main()
{
    int i, rows, k = 1;
    cout << "Enter number of rows : ";
    cin >> rows;
    for (int i = 1; i <= rows * 2; i += 2)
    {
        if (k % 2 == 1)
        {
            cout << i << "  " << (i + 1);
            k++;
        }
        else
        {
            cout << (i + 1) << "   " << i;
            k++;
        }
        cout << endl;
    }
}       