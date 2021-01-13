#include <stdio.h>

int saved[50] = {0};
//Dynamic Programming karena dia menyimpan hasil sebelumnya kedalam array
//sehingga tidak perlu mengulang rekursinya
int fibo(int a, int b, int n) {
    if (saved[n] != 0)
        return saved[n];
    else if (n == 0)
        return a;
    else if (n == 1)
        return b;
    saved[n] = fibo(a, b, n - 1) + fibo(a, b, n - 2);
    return saved[n];
}

int main() {

    int a, b;
    scanf ("%d %d", &a, &b);
    int n;
    scanf ("%d", &n);
    printf("%d\n" ,fibo(a,b,n));
    
    return 0;
}