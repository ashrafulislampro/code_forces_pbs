#include <iostream>
using namespace std;
int sum_of_digits(int n)
{
    int sum_digits = 0;
    while (n != 0)
    {
        sum_digits += n % 10;
        n /= 10;
    }
    return sum_digits;
}
int main()
{
    int n, a, b, sum = 0;
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++)
    {

        int sum_digits = sum_of_digits(i);
        if (sum_digits >= a && sum_digits <= b)
        {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}