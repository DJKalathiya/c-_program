#include <iostream>
using namespace std;
int main()
{
    int i, j, num, temp, max = 0;
    cout << "Enter number of element : ";
    cin >> num;
    int a[num];
    cout << "Enter number \n";
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < num; i++)
    {
        for (j = i + 1; j < num; j++)
        {
            if (a[j] - a[i] > max)
            {
                max = a[j] - a[i];
            }
        }
    }
    cout<<"maximum differnce is : "<<max;
}