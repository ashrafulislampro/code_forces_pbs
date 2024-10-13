#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b;
    string str;
    cin >> a >> b >> str;
    if (str[a] != '-')
    {
        cout << "No" << endl;
        return 0;
    }
    for (int i = 0; i < str.length(); i++)
    {

        if (i == a)
            continue;
        if (!isdigit(str[i]))
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}