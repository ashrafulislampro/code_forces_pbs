#include <iostream>
using namespace std;

int main()
{
    int num, pass = 1999;

    while (1)
    {
        cin >> num;
        if (num == pass)
        {
            cout << "Correct" << endl;
            break;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    return 0;
}