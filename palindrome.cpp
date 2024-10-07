#include <iostream>
using namespace std;

int main()
{
    int num, isPdm = 0;
    cin >> num;
    int temp = num;
    while (temp != 0)
    {
        int remain = temp % 10;
        temp /= 10;
        isPdm = isPdm * 10 + remain;
    }
    if (num == isPdm)
    {
        cout << isPdm << endl
             << "YES" << endl;
    }
    else
    {
        cout << isPdm << endl
             << "NO" << endl;
    }
    return 0;
}