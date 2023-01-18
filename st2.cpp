#include<iostream>
#include<string.h>
using namespace std;
struct book
{
    int id,price;
    char name[100]; 
}b[3];
int main()
{
    int i,max=3;
    for(int i=0; i<max; i++){
        cout<<"ENter book "<<(i+1)<<" id : ";
        cin>>b[i].id;
        cout<<"ENter book "<<(i+1)<<" name : ";
        cin>>b[i].name;
        cout<<"ENter book "<<(i+1)<<" price : ";
        cin>>b[i].price;
    }
    for(int i=0; i<max; i++){
        cout<<"Book "<<(i+1)<<" id = "<<b[i].id<<endl;
        cout<<"Book "<<(i+1)<<" name "<<b[i].name<<endl;
        cout<<"Book "<<(i+1)<<" price1 = "<<b[i].price1<<endl;
    }
}