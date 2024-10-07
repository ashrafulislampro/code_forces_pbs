#include <iostream>
using namespace std;

int main()
{
    int n, item, even = 0, odd = 0, posit = 0, neg = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> item;
        if (item % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (item > 0)
        {
            posit++;
        }
        else if(item < 0)
        {
            neg++;
        }
    }
    cout << "Even: " << even << endl
         << "Odd: " << odd << endl
         << "Positive: " << posit << endl
         << "Negative: " << neg << endl;
    return 0;
}