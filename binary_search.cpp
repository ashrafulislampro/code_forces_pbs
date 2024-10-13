#include <iostream>
#include <algorithm>
using namespace std;
int binary_search(int arr[], int low, int high, int x)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n, q, x;
    cin >> n >> q;
    int *arr = new int[n + 1]();
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    while (q--)
    {
        cin >> x;
        int result = binary_search(arr, 0, n - 1, x);
        if (result == -1)
        {
            cout << "not found" << endl;
        }
        else
        {
            cout << "found" << endl;
        }
    }
    return 0;
}