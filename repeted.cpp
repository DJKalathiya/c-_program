#include <iostream>
using namespace std;
int main()
{
    int num, k, temp, frequency[9], flag = 0, i;
    cout << "Enter big number : ";
    cin >> num;
    temp=num;
    
    for (int i = 0; i < 10; i++)
    {
        frequency[i] = 0;
    }
    while (num > 0)
    {
        k = num % 10;
        frequency[k]++;
        num = num / 10;
    }
    for (int i = 0; i < 10; i++)
    {
        if (frequency[i] > 1)
        {
            flag = 1;
            cout << i << " ---> repeted time : " << frequency[i] << endl;
        }
    }
    if(flag==0){
        cout<<"No repeted elements"<<endl;
    }else{
        cout<<"Repeted elements are there"<<endl;
    }
}