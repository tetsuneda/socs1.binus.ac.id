#include <stdio.h>
#include <math.h>   

int main(){

    double a, b, c, d, e, f, g, h, i, j, k, l;
    scanf ("%lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf, %lf", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l);
    double res = a + b + c + d + e + f + g + h + i + j + k + l;
    double tax1 = floor(0.07 * res);
    double tax2 = floor(0.05 * res);
    printf ("%.2lf, %.2lf, %.2lf\n", tax1, tax2, res-(tax1 + tax2));

    return 0;
}
