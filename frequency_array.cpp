#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int *arr = new int[m + 1]();
    for (int i = 0; i < n; i++)
    {
        int x;

        cin >> x;
        arr[x]++;
    }
    for (int i = 1; i <= m; i++)
    {
        cout << arr[i] << endl;
    }
    delete[] arr;
    return 0;
}