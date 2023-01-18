#include <iostream>
using namespace std;
int getSum(int num);
int getReverse(int sum);
int main()
{
    int sum, reverse, num;
    cout << "ENter number : ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        sum = getSum(i);
        reverse = getReverse(sum);
        if (sum * reverse == i)
        {
            cout << i << endl;
        }
    }
}
int getSum(int n)
{
    int sum = 0, x;
    while (n > 0)
    {
        x = n % 10;
        sum = sum + x;
        n = n / 10;
    }
    return sum;
}
int getReverse(int n)
{
    int rev = 0, x;
    while (n > 0)
    {
        x = n % 10;
        rev = rev * 10 + x;
        n = n / 10;
    }
    return rev;
}