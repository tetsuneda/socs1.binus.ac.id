#include <stdio.h>

unsigned long long leastGreater(unsigned long long low, unsigned long long high, unsigned long long key) {
    unsigned long long ans = 0;
 
    while (low <= high)
    {
        unsigned long long mid = low + (high - low) / 2; // high - low / 2
        unsigned long long midVal = (mid * (mid + 1) * (2 * mid + 1) / 6);
 
        if (midVal < key) 
            low = mid + 1;
        
        else if (midVal >= key)
        {
            ans = mid;
            high = mid - 1;
        }
    }
 
    return ans;
}

int main() {

    int tc;
    scanf("%d", &tc); getchar();
    for (int q = 1; q <= tc; q++)
    {
        unsigned long long target;
        scanf ("%llu", &target);
        printf("Case #%d: ", q);
        printf ("%llu\n", leastGreater(1, 1500000, target));
    }

    return 0;
}

/*
2
2
10
*/