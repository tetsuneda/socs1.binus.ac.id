#include <stdio.h>

int main(){

    int n, m;
    scanf ("%d %d", &n, &m);
    long long int arr[n][m], result[150] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) scanf ("%lld", &arr[i][j]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            result[j] += arr[i][j];
        }
    }
    long long int sum = 1;
    for (int i = 0; i < m; i++)
    {
       sum = sum*(result[i] % 1000000007) % 1000000007;
       sum %= 1000000007;
    }
    printf ("%lld\n", sum);
    return 0;
}
