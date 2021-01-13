#include<stdio.h>
#include<math.h>

int main(){

    int n, s, a, b, c;
    scanf("%d %d %d %d %d", &n, &s, &a, &b, &c);
    
    double result = floor(a/s) * floor(b/s * floor(c/s));
    double result1 = ceil(n/result);
    
    printf("%.lf\n", result1);
    
    return 0;
}
