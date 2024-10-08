#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    int a, b, result;
    cin >> a >> b;
    result = gcd(a, b);
    cout << result;
    return 0;
}