#include <stdio.h>

int main(){

    int tc;
    scanf("%d", &tc);
    for (int q = 1; q <= tc; q++)
    {
        int a, b, c, d, e, f, time = 0;
        scanf ("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
        printf("Case #%d: ", q);
        if ((a == 1 && b > 450)  ||
            (a == 2 && b > 900)  ||
            (a == 3 && b > 1320) ||
            (a == 4 && b > 3200) || 
            (a == 5 && b > 4500)) 
            puts("Line broke up");
        else
        {
            
            while(1){
                for (int i = 0; i < f; i++)
                {
                    c += d;
                    time++;
                }
                for (int i = 0; i < f; i++)
                {
                    c -= 5;
                    time++;
                    if (c <= 0) break;
                }
                if (d > 0) d -= e * f;
                if (d <= 0) d = 0;
                if (c <= 0) break;
            }
            int hour = time / 3600;
            time = time - (3600 * hour);
            int min = time / 60;
            time = time - (60 * min);
            printf ("%02d:%02d:%02d\n", hour, min, time);
        }
    }

    return 0;
}
