#include <stdio.h>

int ack(int m, int n){
    int res;

    if (m == 0) 
        return n + 1;

    else if (m > 0 && n == 0)
        return ack(m - 1, 1);

    res = ack(m - 1, ack(m, n - 1));
    return res;
}

int main(){

    int a,b;
    scanf ("%d %d", &a, &b);
    printf ("result: %d\n", ack(a,b));

    return 0;
}