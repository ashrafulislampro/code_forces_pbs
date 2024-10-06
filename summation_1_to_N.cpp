#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    long long n;
    scanf("%lld", &n);
    long long sum = (n * (n + 1)) / 2;

    printf("%lld", sum);
    return 0;
}
