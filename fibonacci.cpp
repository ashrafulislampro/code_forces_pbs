#include <iostream>
using namespace std;
long long isFibonacci(long long num)
{
    if (num == 1)
    {
        return 0;
    }
    else if (num == 2)
    {
        return 1;
    }
    else
    {
        return isFibonacci(num - 1) + isFibonacci(num - 2);
    }
}
int main()
{
    long long num;
    cin >> num;
    long long result = isFibonacci(num);
    cout << result;
    return 0;
}