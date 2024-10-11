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
    int lowest = arr[0];
    int pos = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < lowest)
        {
            lowest = arr[i];
            pos = i +1;
        }
    }
    cout << lowest << " " << pos << endl;
    return 0;
}