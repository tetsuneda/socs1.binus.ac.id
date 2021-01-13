#include <stdio.h>

void func(int n, char a, char b) {
    if (n == 0)
        printf ("%c", a);
    else if (n == 1)
        printf ("%c", b);
    else
    {
        func(n - 1, a, b);    
        func(n - 2, a, b);
    }
}

int main() {

    int tc;
    scanf("%d", &tc); getchar();
    for (int q = 1; q <= tc; q++)
    {
        int n;
        char a, b;
        scanf ("%d %c %c", &n, &a, &b); getchar();
        printf("Case #%d: ", q);
        func(n, a ,b);
        puts("");
    }

    return 0;
}