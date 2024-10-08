#include <iostream>
using namespace std;

int main()
{
    int num, gam_count = 0;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {

        for (int j = 1; j <= 3; j++)
        {
            cout << ++gam_count << " ";
        }
        cout << "PUM" << endl;
        ++gam_count;
    }
    return 0;
}