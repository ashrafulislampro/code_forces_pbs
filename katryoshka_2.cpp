#include <iostream>
using namespace std;

int main()
{
    long long n, m, k, counter = 0;
    cin >> n >> m >> k;

    while (n > 0 && k > 0)
    {

        if (n >= 1 && m >= 1 && k >= 1)
        {

            counter++;
            n -= 1;
            k -= 1;
            m -= 1;
        }
        else if (n >= 2 && m >= 1 && k >= 1)
        {
            counter++;
            n -= 2;
            k -= 1;
            m -= 1;
        }
        else if (n >= 2 && k >= 1)
        {
            counter++;
            n -= 2;
            k -= 1;
        }
    }

    cout << counter << endl;

    return 0;
}