#include <iostream>
using namespace std;

int main()
{
    int n;
    long long sum = 0;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += arr[i] * 1LL;
    }
    if (sum < 0)
    {
        cout << sum * -1;
    }
    else
    {
        cout << sum;
    }
    return 0;
}