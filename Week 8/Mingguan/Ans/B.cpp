#include <stdio.h>
int ctr = 0;

int func(int n) {
    if (n == 3 || n == 4) ctr++;
    if (n <= 0) return 1;
    if (n == 1) return 2;
    if (n % 3 == 0) return func(n - n / 3) + 1;
    return func(n - 1) + n + func(n - 2) + 1;
}

int main() {
    int tc;
    scanf("%d", &tc);
    for (int q = 1; q <= tc; q++)
    {
        ctr = 0;
        int n;
        scanf ("%d", &n);
        printf("Case #%d: ", q);
        printf ("%d", func(n));
        printf ("%d\n", ctr);
    }
    return 0;
}