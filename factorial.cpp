#include <iostream>
using namespace std;



int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int num;
        cin >> num;
       long long fact = 1;
       for(int i = 1; i <= num; i++){
            fact*=i;
       }
       cout<<fact<<endl;
    }
    return 0;
}