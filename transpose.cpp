#include<iostream>
using namespace std;
int main()
{
    int i,j,rows,col,temp;
    cout<<"Entr number of rows and col of matrix : \n";
    cin>>rows>>col;

    int a[rows][col], t[rows][col];
    cout<<"Enter matrix 1 : \n";
    for(int i=0; i<rows; i++){
        for(int j=0;j<col; j++){
            cin>>a[i][j];
        }
    }
    cout<<"Given matrix is : \n";
    for(int i=0; i<rows; i++){
        for(int j=0;j<col; j++){
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
    temp=rows;
    rows=col;
    col=temp;

    for(int i=0; i<rows; i++){
        for(int j=0; j<col;j++){
            t[i][j]=a[j][i];
        }
    }
    cout<<"Transpose of above matrix is : \n";
    for(int i=0; i<rows; i++){
        for(int j=0; j<col;j++){
            cout<<t[i][j]<<"  ";
        }
        cout<<endl;
    }
}