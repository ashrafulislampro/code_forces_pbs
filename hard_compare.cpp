#include <iostream>
using namespace std;

int main()
{
    int a, b;
    long long c, d;
    cin >> a >> b >> c >> d;
    bool isTrue = pow(a, b) > pow(c, d);
    if (isTrue)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}