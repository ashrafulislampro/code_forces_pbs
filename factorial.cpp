#include <iostream>
using namespace std;

int isFact(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    else
    {
        return num * isFact(num - 1);
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int num;
        cin >> num;
        cout << isFact(num) << endl;
    }
    return 0;
}