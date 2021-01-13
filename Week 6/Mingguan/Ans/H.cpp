#include <stdio.h>

long long int fibo(long long int n){
    
 long long int fib[n+2];
    fib[1] = 1;
    fib[2] = 1;
    for(int i=3; i<=n; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    return fib[n];
}

int main(){

    int tc;
    scanf ("%d", &tc);
    for (int q = 1; q <= tc; q++)
    {
        int a, b;
        scanf ("%d %d", &a, &b);
        printf ("Case #%d: ", q);
        long long int fibo1, sumA = 0;
        for (int i = a; i <= b; i++)
        {
            int temp = 0;
            fibo1 = fibo(i);
            while (fibo1)
            {
                temp += fibo1 % 10;
                fibo1 /= 10;
            }
            sumA += temp;
        }
            printf ("%lld\n", sumA);
    }

    return 0;
}
