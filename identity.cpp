#include <iostream>
using namespace std;
int main()
{
    int i, j, rows, col, flag = 1;
    cout << "Enter number of rows and col : \n";
    cin >> rows >> col;
    int a[rows][col];
    if (rows == col)
    {
        cout << "Enter matrix 1\n";
        for (int i = 0;i < rows; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> a[i][j];
            }
        }
        cout << "Given matrix is \n";
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cout << a[i][j] << "  ";
            }
            cout << endl;
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (i == j && a[i][j] != 1)
                {
                    flag = 0;
                }
                if (i != j && a[i][j] != 0)
                {
                    flag = 0;
                }
            }
        }
        if(flag==1){
            cout<<"Identity matrix\n";
        }else{
            cout<<"It's not identity matrix\n";
        }
    }
    else{
        cout<<"Should be square matrix\n";
    }
}