#include <iostream>
using namespace std;
int main()
{
    int i, j, rows, col;
    cout << "Enter number of rows and col : \n";
    cin >> rows >> col;
    int a[rows][col];
    if (col == rows)
    {
        cout << "Enter matrix 1 : \n";
        for (int i = 0; i < rows; i++)
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
        cout<<"Upper triangle of matrix : \n";
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if(i<j){
                    cout<<a[i][j]<<endl;
                }
            }
        }
        cout<<"Lowwer triangle of matrix : \n";
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if(i>j){
                    cout<<a[i][j]<<endl;
                }
            }
        }
    }else{
        cout<<"Not possible\n";
    }
}