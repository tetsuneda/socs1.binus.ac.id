#include <stdio.h>

//using iteration
int fib(int num) {
    int x = 3, y = 2, z = 0;
    for (int i = 0; i < num; i++)
    {
       z = x + y;
       x = y;
       y = z;
    }
    return x - 1;
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
    }

    return 0;
}