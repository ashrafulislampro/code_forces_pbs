#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a;
    long long b;
    char ch;
    float f;
    double d;
    cin >> a >> b >> ch >> f >> d;
    cout << a << endl
         << b << endl
         << ch << endl
         << fixed << setprecision(2) << f << endl
         << d << endl;

    return 0;
}