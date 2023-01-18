#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter number : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
            if (i % 2 == 1){
                cout << i << endl;
        }
        else
        {
            continue;
        }
    }
    cout << endl;
}