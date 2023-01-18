#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i;
    char ch, ch1;
    ch = 219;
    ch1 = 220;
    gotoxy(46, 8);
    cout << ch;
    gotoxy(46, 7);
    cout << ch;
    gotoxy(30, 8);
    cout << ch;
    gotoxy(30, 7);
    cout << ch;
    gotoxy(38, 7);
    cout << ch;
    gotoxy(38, 5);
    cout << ch;

    for (int i = 1; i <= 10; i++)
    {
        gotoxy(60, i + 10);
        cout << ch << endl;
    }
    for (int i = 1; i <= 10; i++)
    {
        gotoxy(50, i + 10);
        cout << ch << endl;
    }
    for (int i = 1; i <= 10; i++)
    {
        gotoxy(40, i + 10);
        cout << ch << endl;
    }
    for (int i = 1; i <= 5; i++)
    {
        gotoxy(30, i + 15);
        cout << ch << endl;
    }
    for (int i = 1; i <= 5; i++)
    {
        gotoxy(20, i + 15);
        cout << ch << endl;
    }
    for (int i = 1; i <= 30; i++)
    {
        gotoxy(20 + i, 20);
        cout << ch ;
    }
    for (int i = 1; i <= 11; i++)
    {
        gotoxy(i + 19, 15);
        cout << ch1 ;
    }
    for (int i = 1; i <= 15; i++)
    {
        gotoxy(i + 30, 8);
        cout << ch ;
    }
    
}