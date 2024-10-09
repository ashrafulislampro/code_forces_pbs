#include <iostream>
#include <vector>
using namespace std;
bool isLuckyNum(int n)
{
    vector<int> newArr(0);
    bool isTrue = false;
    while (n != 0)
    {
        int rem = n % 10;
        n /= 10;
        newArr.push_back(rem);
    }
    for (int i = 0; i < newArr.size(); i++)
    {
        if ((newArr[i] == 4) || (newArr[i] == 7))
        {
            isTrue = true;
        }
        else
        {
            isTrue = false;
            break;
        }
    }
    if (isTrue)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int a, b;
    bool isTrue = true;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {

        if (isLuckyNum(i))
        {
            cout << i << " ";
            isTrue = false;
        }
    }
    if (isTrue)
    {
        cout << -1;
    }
    return 0;
}