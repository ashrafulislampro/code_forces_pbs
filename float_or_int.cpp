#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float n;
    int n1;
    cin >> n;
    n1 = (int)n;
    float n2 = n - n1;
    if (n2 == 0)
    {
        cout << "int " << n1;
    }
    else
    {
        cout << fixed << setprecision(3);
        cout << "float " << n1 << " " << n2;
    }
    return 0;
}