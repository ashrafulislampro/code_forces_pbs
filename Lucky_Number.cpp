#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int f_digit = num / 10;
    int s_digit = num % 10;

    if (s_digit == 0 || f_digit % s_digit == 0 || s_digit % f_digit == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}