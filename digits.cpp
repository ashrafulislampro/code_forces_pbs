#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int item;
        cin >> item;
        if (item == 0)
        {
            cout << "0";
        }
        while (item != 0)
        {
            cout << item % 10;
            item /= 10;
            if (item != 0)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}