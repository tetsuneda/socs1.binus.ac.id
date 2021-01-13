#include <stdio.h>

int main(){

    long long int n, k;
    scanf ("%lld %lld", &n, &k);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf ("%lld", &arr[i]);
    }
    long long int sum;
    long long int max = 0;
    for (int i = 0; i <= n - k; i++)
    {
        sum = 0;
        for (int j = 0; j < k; j++)
        {
            sum += arr[i + j];
            printf ("%d ", arr[i + j]);
        }
        puts("");
        if (max < sum) max = sum;
    }
    // printf ("%lld\n", max);
    return 0;
}
