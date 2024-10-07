#include <iostream>
using namespace std;
bool isPrime(int num)
{
    if (num < 2)
    {
        return false;
    }
    if (num == 2 || num == 3)
    {
        return true;
    }
    if (num % 2 == 0)
    {
        return false;
    }
    if (num % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i < num; i += 2)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num;
    cin >> num;

    if (isPrime(num))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}