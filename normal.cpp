#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i,j,rows,col,temp,sum=0;
    cout<<"Entr number of roows and col \n";
    cin>>rows>>col;
    int a[rows][col];
    double normal;

    cout<<"Enter matrix 1 : \n";
    for(int i=0; i<rows; i++){
        for(int i=0; j<col; j++){
            cin>>a[i][j];
            
        }
        sum+=(a[i][j]*a[i][j]);
    }
    cout<<"Given matrix is \n";
    for(int i=0; i<rows; i++){
        for(int j=0; j<col;j++){
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
    normal = (double)sqrt(sum);
    cout<<"Normal of given matrix is "<<normal;
}