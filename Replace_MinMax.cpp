#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0], max = arr[0];
    int min_pos = 0, max_pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= min)
        {
            min = arr[i];
            min_pos = i;
        }
        if (arr[i] >= max)
        {
            max = arr[i];
            max_pos = i;
        }
    }

    arr[min_pos] = max;
    arr[max_pos] = min;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        if (i != n - 1)
        {
            cout << " ";
        }
    }

    return 0;
}