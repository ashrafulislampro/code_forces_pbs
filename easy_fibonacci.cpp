#include <iostream>
using namespace std;
void isFibonacci(int n)
{
    if (n == 1)
    {
        cout << 0;
    }
    else if (n == 2)
    {
        cout << 0 << " " << 1;
    }
    else if (n >= 3)
    {
        int first = 0, second = 1, next, temp;
        cout << first << " " << second;
        for (int i = 3; i <= n; i++)
        {
            next = first + second;
            first = second;
            second = next;
            cout << " " << next;
        }
    }
}
int main()
{
    int n;
    cin >> n;

    isFibonacci(n);
    return 0;
}