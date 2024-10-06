#include <iostream>
using namespace std;

int main()
{
    // Declare variables to store the coordinates
    float x, y;

    // Input the two floating-point numbers (x, y)
    cin >> x >> y;

    // Determine the location of the point
    if (x == 0 && y == 0)
    {
        cout << "Origem" << endl; // Point is at the origin
    }
    else if (x == 0)
    {
        cout << "Eixo Y" << endl; // Point is on the Y-axis
    }
    else if (y == 0)
    {
        cout << "Eixo X" << endl; // Point is on the X-axis
    }
    else if (x > 0 && y > 0)
    {
        cout << "Q1" << endl; // Point is in the first quadrant
    }
    else if (x < 0 && y > 0)
    {
        cout << "Q2" << endl; // Point is in the second quadrant
    }
    else if (x < 0 && y < 0)
    {
        cout << "Q3" << endl; // Point is in the third quadrant
    }
    else if (x > 0 && y < 0)
    {
        cout << "Q4" << endl; // Point is in the fourth quadrant
    }

    return 0;
}
