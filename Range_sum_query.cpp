#include <iostream>
using namespace std;

int main()
{
    int n, q, l, r;
    cin >> n >> q;
    int *arr = new int[n + 1]();
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (q--)
    {
        cin >> l >> r;
        long long sum = 0;
        for (int i = l - 1; i < r; i++)
        {
            sum += arr[i]*1LL;
        }
        cout << sum << endl;
    }
    return 0;
}