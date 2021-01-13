#include <stdio.h>

int main(){

    int tc;
    scanf ("%d", &tc);
    for (int i = 1; i <= tc; i++)
    {
        int a, b;
        scanf ("%d %d", &a, &b);
        int result = 0, mult = 1;
        printf ("Case #%d: ", i);
        while (a || b)
        {
            int sum = (a % 10) + (b % 10);
            sum %= 10;

            result += sum * mult;
            a /= 10;
            b /= 10;
            mult *= 10;
        }
        printf ("%d\n", result);
    }


    return 0;
}