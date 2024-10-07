#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long c, d, a, b;
    cin >> a >> b >> c >> d;
    long long left = b * log(a);
    long long right = d * log(c);
    if (left > right)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}