#include <stdio.h>

int main(){

    int a, b, c, d;
    scanf ("%d %d %d %d", &a, &b, &c ,&d);
    long long result1 = a * b;
    long long result2 = c - d;
    if (result1 == result2) puts("True");
    else puts ("False");
    return 0;
}