#include <iostream>
using namespace std;

int main()
{
    float x;
    cin >> x;

    if (x >= 0 && x <= 25)
    {
        cout << "Invertal [0, 25]" << endl;
    }
    else if (x > 25 && x <= 50)
    {
        cout << "Invertal (25, 50]" << endl;
    }
    else if (x > 50 && x <= 75)
    {
        cout << "Invertal (50, 75]" << endl;
    }
    else if (x > 75 && x <= 100)
    {
        cout << "Invertal (75, 100]" << endl;
    }
    else
    {
        cout << "Out of Intervals" << endl;
    }

    return 0;
}