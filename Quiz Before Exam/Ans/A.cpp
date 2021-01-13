#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

int fibo(int n) {
    if (n <= 0)
        return 0;
    return fibo(n - 1) + 1;
}

int main() {

    int n;
    scanf ("%d", &n);
    printf ("%d\n", fibo(n));

    return 0;
}