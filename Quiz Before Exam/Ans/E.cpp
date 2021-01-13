#include <stdio.h>

long long leastGreater(long long* arr, long long low, long long high, int count, long long key) {
    long long ans = -1;
    while (low <= high)
    {
        long long mid = low + (high - low) / 2;
        long long midVal = 0;

        for (int i = 0; i < count; i++)
        {
            long long temp = arr[i] - mid;
            if (temp <= 0)
                temp = 0;
            midVal += temp;
        }

        if (midVal < key)
            high = mid - 1;

        else if (midVal >= key)
        {
            ans = mid;
            low = mid + 1;
        }

    }
    return ans;
}

int main() {

    long long a, b;
    scanf ("%lld %lld", &a, &b);
    long long arr[a], max = 0;
    for (long long i = 0; i < a; i++)
    {
        scanf ("%lld", &arr[i]);
        if (arr[i] > max)
            max = arr[i];
    }
        

    printf ("%lld\n", leastGreater(arr, 0, max, a, b));

    return 0;
}