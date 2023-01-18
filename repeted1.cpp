#include <iostream>
using namespace std;
void getRepet(int num, int fr[]);
int checkRepet(int fr[], int total, int flag);

int main()
{
    int num, k, temp, fr[9], flag = 0, i;
    cout << "Enter number : ";
    cin >> num;
    temp = num;
    for (int i = 0; i < 10; i++)
    {
        fr[i] = 0;
    }
    getRepet(num, fr);
    flag = checkRepet(fr, 9, 0);
    if (flag == 0)
    {
        cout << "no repeted items\n";
    }
    else
    {
        cout << "Repeted digits are there : \n";
    }
}
void getRepet(int num, int fr[])
{
    int k;
    if (num > 0)
    {
        k = num % 10;
        fr[k] += 1;
        num /= 10;
        getRepet(num, fr);
    }
    else
    {
        return;
    }
}
int checkRepet(int fr[], int total, int flag)
{
    if (total >= 0)
    {
        if (fr[total] > 1)
        {
            flag = 1;
            cout << total << " ---> repeted " << fr[total] << endl;
        }
        total--;
        checkRepet(fr, total, flag);
    }
    else
    {
        return (flag);
    }
}