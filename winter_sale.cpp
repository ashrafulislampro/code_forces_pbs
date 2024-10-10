#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int x, p;

    cin >> x >> p;

    float bf_p = (p * 100.00) / (100.00 - x);
    cout << fixed << setprecision(2) << bf_p;
    return 0;
}