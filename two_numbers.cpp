#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, fl, ce, ro;
    scanf("%d%d", &a, &b);
    fl = floor(a * 1.0/b);
    ce = ceil(a * 1.0/b);
    ro = round(a * 1.0/b);

    cout<<"floor " << a<<" / "<<b<<" = "<<fl<<endl;
    cout<<"ceil " << a<<" / "<<b<<" = "<<ce<<endl;
    cout<<"round " << a<<" / "<<b<<" = "<<ro<<endl;
    return 0;
}