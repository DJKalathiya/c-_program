#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int choice;
    cout << "Enter \n 1 for Triangle\n 2 for Square\n 3 for Circle\n 4 for Rectangle\n 5 for Parrallelogram\n\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        int a, b, c;
        float s, area;
        cout << "Enter size of trianglle\n";
        cin >> a >> b >> c;

        s = (float)(a + b + c) / 2;
        area = (float)(sqrt(s * (s - a) * (s - b) * (s - c)));
        cout << "Area is " << area;
        break;
    }
    case 2:
    {
        float side, area;
        cout << "Enter sides of square : ";
        cin >> side;
        area = (float)side * side;
        cout << "Area of square : " << area;
        break;
    }
    case 3:
    {
        float radius,area;
        cout<<"ENter radius of circle : ";
        cin>>radius;
        area = (float)3.14*radius*radius;
        cout<<"Area of circle : "<<area;
        break;
    }
    default:
    {
        cout<<"Invalid choice\n";
        break;
    }
    }
}