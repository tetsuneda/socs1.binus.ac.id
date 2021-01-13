#include <stdio.h>

void swap (double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int tc;
    scanf("%d", &tc); getchar();
    for (int q = 1; q <= tc; q++)
    {
        // amount of data
        int n;

        // variables for sum, mean, and median
        double sum = 0, mean = 0, median = 0;
        scanf ("%d", &n);

        // initialize array with n size
        double arr[n];

        // scan array + sums it
        for (int i = 0; i < n; i++)
        {
            scanf ("%lf", &arr[i]);
            sum += arr[i];
        }

        printf("Case #%d:\n", q);

        // sort ascending
        for (int i = 0; i < n - 1; i++)
            for (int j = i; j < n; j++)
                if (arr[i] > arr[j])
                    swap(&arr[i], &arr[j]);

        // if amount of data is even
        if (n % 2 == 0)
        // the median formula is (n / 2 - 1) + (n / 2) / 2
            median = (arr[n / 2 - 1] + arr[n / 2]) / 2;
        // ex : 1 2 3 4
        // (n / 2 - 1) -> index 1 is 2 and (n / 2) -> index 2 is 3

        // if the amount of data is odd
        else
        // then the formula just n / 2
            median = arr[n / 2];
        // ex : 1 2 3 4 5
        // 5 / 2 = 2 (index 2 -> 3)
        
        // mean is sum of data divided by amount of data
        mean = sum / n;
        printf ("Mean : %.2lf\n", mean);
        printf ("Median : %.2lf\n", median);
    }

    return 0;
}

/*
2
5
3 1 2 5 4
3
1 9 11

1
5
2 9 6 5 8
*/