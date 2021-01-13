#include <stdio.h>

int main(){

    int tc;
    scanf ("%d", &tc);
    for (int q = 1; q <= tc; q++)
    {
        int n;
        scanf ("%d", &n);
        printf ("Case #%d:\n", q);
        for (int i = 1; i <= n; i++)
        {
            for (int j = n; j >= 1; j--)
            {
                int row = i + j;
                if (j <= i)
                {
                    if (n % 2 == 0)
                    {
                        if (row % 2 == 0) printf ("#");
                        else printf ("*");
                    }
                    else
                    {       
                        if (row % 2 == 0) printf ("*");
                        else printf ("#");
                    }
                    
                }
                else printf (" ");
            }
            puts("");
        }
    }

    return 0;
}