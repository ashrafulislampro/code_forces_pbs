#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int k = n - i - 1; k > 0; k--)
        {
            cout << " ";
        }
        for (int j = 0; j < i * 2 + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}