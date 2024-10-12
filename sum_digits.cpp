#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, sum=0;
    string digits;
    cin >> n >> digits;

   
    for (int i = 0; i < n; i++)
    {
        
        sum += digits[i] - '0';
    }
    cout << sum << endl;

    return 0;
}