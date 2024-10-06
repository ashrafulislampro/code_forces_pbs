#include <iostream>
using namespace std;

int main()
{
    int days, years = 0, mons = 0;
    cin >> days;

    years = days / 365;
    days %= 365;

    mons = days / 30;
    days %= 30;

    cout << years << " years" << endl
         << mons << " months" << endl
         << days << " days" << endl;
    return 0;
}
