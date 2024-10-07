#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    long long result = (a % 100) * (b % 100) % 100 * (c % 100) % 100 * (d % 100) % 100;

    cout << result % 100 << endl;
    return 0;
}