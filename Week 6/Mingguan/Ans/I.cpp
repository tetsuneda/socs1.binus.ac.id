#include <stdio.h>

int main(){

    int tc;
    scanf ("%d", &tc);
    for (int q = 1; q <= tc; q++)
    {
        fflush(stdin);
        int n, ctr[1000005] = {0};
        scanf ("%d", &n);
        int l[n], r[n];
        for (int j = 0; j < n; j++)
        {
            scanf ("%d %d", &l[j], &r[j]);
            for (int k = l[j]; k < r[j]; k++)
            {
                ctr[k]++;
            }
        }
        int counter = 0;
        for (int j = 0; j < n; j++)
        {
           int flag = 1;
           for (int k = l[j]; k < r[j]; k++)
           {
               if (ctr[k] != 1)
               {
                   flag = 0;
                   break;
               }
           }
               if (flag) counter++;
        }
        printf ("Case #%d: %d\n", q, counter);
    }

    return 0;
}