#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    long long int mul = (long long int)x * y;
    cout << x << " + " << y << " = " << x + y << endl
         << x << " * " << y << " = " << mul << endl
         << x << " - " << y << " = " << x - y << endl;
    return 0;
}