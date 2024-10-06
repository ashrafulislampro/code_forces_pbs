#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a < b && a < c)
    {
        cout << a << endl;
        if (b < c)
        {
            cout << b << endl;
            cout << c << endl;
        }
        else if (c < b)
        {
            cout << c << endl;
            cout << b << endl;
        }
    }
    else if (b < a && b < c)
    {
        cout << b << endl;
        if (a < c)
        {
            cout << a << endl;
            cout << c << endl;
        }
        else if (c < a)
        {
            cout << c << endl;
            cout << a << endl;
        }
    }
    else
    {
        cout << c << endl;
        cout << b << endl;
        cout << a << endl;
    }
    cout << endl;
    cout << a << endl
         << b << endl
         << c << endl;
    return 0;
}