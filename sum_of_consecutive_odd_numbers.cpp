#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, sum = 0;
        cin >> a >> b;
        if ((a == b) || (a == b + 1) || (b == a + 1))
        {
            cout << 0 << endl;
        }
        else if (a > b)
        {
            for (int i = b + 1; i < a; i++)
            {
                if(i % 2 != 0){
                    sum += i;
                }
            }
            cout << sum << endl;
        }
        else if (b > a)
        {
            for (int i = a + 1; i < b; i++)
            {
               if(i % 2 != 0){
                    sum += i;
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}