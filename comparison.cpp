#include <iostream>
using namespace std;

int main()
{
    int a, b;
    char ch;
    cin >> a >> ch >> b;
    if (ch == '>')
    {
        cout << (a > b ? "Right" : "Wrong");
    }
    else if (ch == '<')
    {
        cout << (a < b ? "Right" : "Wrong");
    }
    else if (ch == '=')
    {
        cout << (a == b ? "Right" : "Wrong");
    }
    return 0;
}