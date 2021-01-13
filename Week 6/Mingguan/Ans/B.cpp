#include <stdio.h>

int main(){

    unsigned long long int a;
    scanf ("%llu", &a);
    long long int res = 1;
    for (int i = 0; i < a; i++)
    {
        res *= 2;
    }
    printf ("%lld\n", res - 1);
    return 0;
}