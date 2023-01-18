#include <iostream>
using namespace std;
void sumOfEven(int a[], int num, int sum);
int main()
{
    int i, a[100], num, sum = 0;
    cout << "Enter number of  array element : ";
    cin >> num;
    cout << "Enter array element " << endl;
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    sumOfEven(a, num - 1, sum);
}
void sumOFEven(int a[], int num, int sum)
{
    if (num >= 0)
    {
        if ((a[num]) % 2 == 0)
        {
            sum += (a[num]);
        }
        sumOFEven(a, num - 1, sum);
    }
    else
    {
        cout << sum << endl;
        return;
    }
}