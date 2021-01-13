#include <stdio.h>
#include <math.h>

int main(){

    int tc;
    scanf("%d", &tc);
    for (int q = 1; q <= tc; q++)
    {
        int a, b, c, i = 1, time = 0;
        scanf ("%d %d %d", &a, &b, &c);
        while (1)
        {
            int red = b, black = c;

            i % 4 == 0 ? red -= floor(red/3) : red *= 2;
            i % 3 == 0 ? black -= floor(0.8 * black) : black *= 3;
            if (red + black <= a)
            {
                b = red;
                c = black;
                time++;
                i++;
            }
            else break;
        }
        printf("Case #%d: ", q);
        printf ("%d ", time);
        b > c ? printf ("Red %d\n", b - c) : c > b ? printf ("Black %d\n", c - b) : printf ("None 0\n");
    }

    return 0;
}