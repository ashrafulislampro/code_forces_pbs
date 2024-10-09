#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int item;
        cin >> item;
        vector<int> newArr(0);
        int sum = 0;
        while (item != 0)
        {
            int rem = item % 2;
            item /= 2;
            if (rem == 1)
            {
                newArr.insert(newArr.begin(), rem);
            }
        }
        for (int i = 0; i < newArr.size(); i++)
        {
            sum += pow(2, i);
        }
        cout << sum << endl;
    }
    return 0;
}