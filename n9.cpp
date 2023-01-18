#include <iostream>
using namespace std;
int main()
{
    int i, j, rows, count = 0;
    cout << "Etnr number of rows :";
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        count += i;
        if (i % 2 == 1)
        {
            for (int j = count - i + 1; j <= count; j++)
            {
                cout << j << "  ";
            }
        }
        else
        {
            for (int j = count; j > count - i; j--)
            {
                cout << j << "  ";
            }
        }
        cout << endl;
    }
}