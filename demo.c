#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n, max_salami;
    scanf("%d", &n);
    int arr[n];
    max_salami = 0;
    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        arr[i] = x;
        if(x > max_salami){
            max_salami = x;
        }
    }
    for(int i = 0; i <n; i++){
        printf("%d ", max_salami - arr[i]);
    }
    return 0;
}
