#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a1, a2, b1, b2, c1, c2, x, y, d[4];
    cout << "Enter first fourmula number : " << endl;
    cin >> a1 >> b1 >> c1;
    cout << "Enter second fourmula number : " << endl;
    cin >> a2 >> b2 >> c2;

    if (((a1 * b2) - (a2 * b1)) != 0)
    {
        d[0] = (c1 / a1);
        d[1] = (-1) * (b1 / a1);
        d[2] = (c2 / a2);
        d[3] = (-1) * (b2 / a2);
        y = ((d[2] - d[0]) / (d[1] - d[3]));
        x = d[0] + (d[1] * y);
        cout << endl;
        cout << x << " , " << y << endl;
    }
}