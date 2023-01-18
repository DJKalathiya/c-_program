#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
    int c = 0, k, n;
    k = rand() % 100;
    cout << "Computer has selected number\nchoice 0 to 100 number \n";
in:
    cout << "Enter to find hidden number : ";
    cin >> n;
    c++;
    if (n > k)
    {
        cout << "Number is grater than \n";
    }
    if (n < k)
    {
        cout << "NUmber is less than \n";
    }
    if (n == k)
    {
        cout << endl;
        cout << "Number is found\n";
        cout << "number is " << k << endl;
        cout << "Number found in " << c << " times\n";
        return 0;
    }
    goto in;
}