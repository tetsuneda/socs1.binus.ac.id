#include <stdio.h>

int main(){

    int tc;
    scanf ("%d", &tc);
    for (int q = 1; q <= tc; q++)
    {
        int n;
        scanf ("%d", &n);
        long long int arr[n + 5];
        for (int i = 0; i < n; i++) scanf ("%lld", &arr[i]);

        long long int min = 0, sum[n] = {0};
        for (int i = 0; i < n - 1; i++)
        {
            sum[i] = arr[i + 1] - arr[i];
            if (min <= sum[i]) min = sum[i];
            // printf ("%d ", sum[i]);
        }
        long long int temp = min, ctr = 0;
        printf ("Case #%d: ", q);
        for (int i = 0; i < n - 1; i++)
        {
            while (sum[i] <= min)
            {
                min -= sum[i];
                i++;
            }
            i--;
            ctr++;
            min = temp;
        }
        printf ("%lld %lld\n",min, ctr);
    }

    return 0;
}