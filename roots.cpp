#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main()
{
    float a, c, b, root1, root2;
    float real, imaginary, discriminant;
    cout << "Enter value A, B, C \n";
    cin >> a >> b >> c;
    if (a == 0 || b == 0 || c == 0)
    {
        cout << "Error\n\n";
    }
    else
    {
        discriminant = b * b - 4.0 * a * c;
        if (discriminant < 0)
        {
            cout << "Imaginary root\n";
            real = -b / (2.0 * a);
            imaginary = sqrt(abs(discriminant)) / (2.0 * a);
            cout << "Root1 = " << real << " + i " << imaginary;
            cout << "Root1 = " << real << " - i " << imaginary;
        }
        else if (discriminant == 0)
        {
            cout << "Root are real and equal\n";
            root1 = -b / (2.0 * a);
            root2 = root1;
            cout << "Root1 = " << root1 << endl;
            cout << "Root2 = " << root2 << endl;
        }
        else if (discriminant > 0)
        {
            cout << "Roots are real and distinct\n";
            root1 = (-b + sqrt(discriminant)) / (2.0 / a);
            root2 = (-b - sqrt(discriminant)) / (2.0 / a);
            cout << "root1 = " << root1;
            cout << "root2 = " << root2;
        }
    }
    return 0;
}