#include<iostream>
using namespace std;
int main()
{
    int i,j,rows,col;
    cout<<"Enter number of rows : ";
    cin>>rows;
    cout<<"Enter number of col : ";
    cin>>col;

    int a1[rows][col],a2[rows][col],add[rows][col];
    cout<<"Enter matrix 1 : \n";
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            cin>>a1[i][j];
        }
    }

    cout<<"Enter matrix 2 : \n";
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            cin>>a2[i][j];
        }
    }

    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            add[i][j]=a1[i][j] - a2[i][j];
        }
    }
    cout<<endl<<"ADdition of two rows : \n";
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            cout<<add[i][j]<<"   ";           
        }
        cout<<endl;
    }

}