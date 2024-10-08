#include <iostream>
using namespace std;

int main()
{
    char s;
    int n;
    cin >> s >> n;
    while (n--)
    {
        int item;
        cin >> item;
        for (int i = 0; i < item; i++)
        {
            if (s == '+')
            {
                cout << '+';
            }
            else if (s == '-')
            {
                cout << '-';
            }
            else if (s == '*')
            {
                cout << '*';
            }
            else if (s == '/')
            {
                cout << '/';
            }
        }
        cout << endl;
    }
    return 0;
}