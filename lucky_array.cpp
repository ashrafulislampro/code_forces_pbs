#include <iostream>
using namespace std;

int main()
{
    int n, counter = 0;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {

        if (arr[i] < min)
        {

            min = arr[i];
            counter = 0;
        }
        if (arr[i] == min)
        {
            counter++;
        }
    }
    if (counter % 2 != 0)
    {
        cout << "Lucky" << endl;
    }
    else
    {
        cout << "Unlucky" << endl;
    }

    return 0;
}