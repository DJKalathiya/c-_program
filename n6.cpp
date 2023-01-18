#include <iostream>
using namespace std;
int main()
{
    int len, i, j, rows;
    cout << "Enter number of rows : ";
    cin >> rows;
    for (int i = rows; i >=0; i--)
    {
        for (int j = 0; j < rows; j++)
        {
            if (i == j || i + j == rows - 1)
            {
                cout << (i + 1);
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}