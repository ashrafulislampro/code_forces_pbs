#include <iostream>
using namespace std;

int main()
{
    int T, max_item = 0;
    cin >> T;
    while (T--)
    {
        int item;
        cin >> item;
        if (item > max_item)
        {
            max_item = item;
        }
    }
    cout << max_item << endl;
    return 0;
}