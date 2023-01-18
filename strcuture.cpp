#include<iostream>
#include<string.h>
using namespace std;
struct Book
{
    int id,price;
    char name[100];
};
int main()
{
    struct Book b;
    cout<<"ENter book id \n";
    cin>>b.id;
    cout<<"Enter book name\n";
    cin>>b.name;
    cout<<"Enter book price \n";
    cin>>b.price;

    cout<<"Book id : "<<b.id;
    cout<<"Book name : "<<b.name;
    cout<<"Book price : "<<b.price;
}