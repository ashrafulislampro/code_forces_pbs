#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int *arr = new int[n + 1]();
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        arr[x]++;
    }
    for (int i = 0; i < 2; i++)
    {
        cout << arr[i]<< " ";
    }
    return 0;
}