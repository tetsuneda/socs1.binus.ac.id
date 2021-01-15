#include <stdio.h>

long long leastGreater(long long* arr, long long low, long long high, int count, long long key) {
    long long ans = -1;
    while (low <= high)
    {
        long long h = low + (high - low) / 2;
        long long sum = 0;

        for (int i = 0; i < count; i++)
        {
            long long temp = arr[i] - h;
            if (temp <= 0)
                temp = 0;
            sum += temp;
        }

        if (sum < key)
            high = h - 1;

        else if (sum >= key)
        {
            ans = h;
            low = h + 1;
        }

    }
    return ans;
}

int main() {

    long long n, x;
    scanf ("%lld %lld", &n, &x);
    long long arr[n], max = 0;
    for (long long i = 0; i < n; i++)
    {
        scanf ("%lld", &arr[i]);
        if (arr[i] > max)
            max = arr[i];
    }
    printf ("%lld\n", leastGreater(arr, 0, max, n, x));

    return 0;
}