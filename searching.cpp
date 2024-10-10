#include <iostream>
using namespace std;

int main()
{
    int n, x;
    bool isTrue = true;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> x;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == x)
        {
            cout << j << endl;
            isTrue = false;
            break;
        }
    }
    if (isTrue)
    {
        cout << -1 << endl;
    }
    return 0;
}