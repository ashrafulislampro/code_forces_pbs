#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, sum = 0, num;
    cin >> n >> num;

    string num_str = to_string(num).substr(0, n);
    int num_digit = stoi(num_str);
    int arr[1] = {num_digit};

    for (int i = 0; i < n; i++)
    {
        int rem = arr[0] % 10;
        sum += rem;
        arr[0] /= 10;
    }
    cout << sum << endl;

    return 0;
}