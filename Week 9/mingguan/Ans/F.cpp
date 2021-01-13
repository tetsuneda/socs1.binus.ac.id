#include <stdio.h>

long long int func(int n, int m) {
    long long int sum = 0;

    for (int i = n - 1; i < m; i++)
        sum += (1 << i);

    return sum;
}

int main() {
    int tc;
    scanf("%d", &tc);
    for (int q = 1; q <= tc; q++)
    {
        int a, b;
        scanf ("%d %d", &a, &b);
        printf("Case #%d: ", q);
        printf ("%d\n", func(a,b));
    }

    return 0;
}