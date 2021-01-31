#include <stdio.h>

long long max(long long a, long long b) { return (a > b) ? a : b; }

long long knapsack(long long* weight, long long* value, int limit, int n){
    if(n == 0 || limit == 0)
        return 0;
    
    if(value[n - 1] > limit)
        return knapsack(weight, value, limit, n - 1);
    
    else
        return max(weight[n - 1] + knapsack(weight, value, limit - value[n - 1], n - 1), knapsack(weight, value, limit, n - 1));
    
}

int main() {

    long long tc;
    scanf("%lld", &tc); getchar();
    for (long long q = 1; q <= tc; q++)
    {
        long long n, limit;
        scanf ("%lld %lld", &n, &limit);
        long long weight[n + 20], value[n + 20];
        for (long long i = 0; i < n; i++)
            scanf ("%lld %lld", &weight[i], &value[i]);
        printf("Case #%lld: ", q);
        printf("%lld\n", knapsack(weight, value, limit, n));
    }    

    return 0;
}

/*
3
5 30
3 10
2 15
4 12
5 6
7 20
5 100
3 10
2 15
4 12
5 6
7 20
5 5
3 10
2 15
4 12
5 6
7 20
*/