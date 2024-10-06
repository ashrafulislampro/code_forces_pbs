#include <iostream>
using namespace std;

int main()
{
    int x, fd;
    cin >> x;
    while (x != 0)
    {
        fd = x % 10;
        x /= 10;
    }
    if (fd % 2 == 0)
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }
    return 0;
}