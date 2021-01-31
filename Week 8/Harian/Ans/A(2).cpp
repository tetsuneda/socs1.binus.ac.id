#include <stdio.h>

//using dynamic programming
int saved[50] = {0};

int fib(int n) {
    if (saved[n] != 0) return saved[n];
    if (n == 0) return 2;
    if (n == 1) return 1;
    saved[n] =  fib(n - 1) + fib(n - 2) + 1;
    return saved[n];
}

int main() {

    int tc;
    scanf("%d", &tc);
    for (int q = 1; q <= tc; q++)
    {
        int n;
        scanf ("%d", &n);
        int res = fib(n);
        printf("Case #%d: ", q);
        printf ("%d\n", res);
        for (int i = 0; i < 50; i++)
            saved[i] = 0;
    }

    return 0;
}
