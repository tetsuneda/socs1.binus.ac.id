#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

int main() {

    int tc;
    scanf("%d", &tc);
    for (int q = 1; q <= tc; q++)
    {
        long long int n;
        int flag = 1;
        scanf ("%lld", &n);
        printf("Case #%d: ", q);
        while(n > 1)
        {
            if (n % 2 == 0)
                n /= 2;
            else
                n = (n * 3) + 1;
            flag = !flag;
        }
        if (flag)
            puts("Lili");
        else
            puts("Jojo");
    }

    return 0;
}