#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

int main() {
    int tc;
    scanf("%d", &tc);
    for (int q = 1; q <= tc; q++)
    {
        int n, ctr = 0;
        scanf ("%d", &n);
        printf("Case #%d: ", q);
        
        for (int i = 1; i * i <= n; i++) 
            if (n % i == 0)
                (n / i == i) ? ctr++ : ctr += 2;
        
        printf ("%d\n", ctr);
    }

    return 0;
}
