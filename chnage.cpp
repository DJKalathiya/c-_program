#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout << "Enter number a and b : ";
    cin>>a>>b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "Number a and b after swapping" << endl;
    cout << a << endl                                                                                                                                                                    << b << endl;

    return 0;
}