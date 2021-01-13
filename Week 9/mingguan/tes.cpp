#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void shift(int* arr, int n) {
    for (int i = n - 1; i > 0; i--)
        swap(&arr[i], &arr[i - 1]);
}

int main() {

    int tc;
    scanf("%d", &tc); getchar();
    for (int q = 1; q <= tc; q++)
    {
        int n, ctr = 0, max = 0;
        scanf ("%d", &n);
        int VIP[n], reguler[n];
        for (int i = 0; i < n; i++)
            scanf ("%d", &VIP[i]);

        for (int i = 0; i < n; i++)
            scanf ("%d", &reguler[i]);

        for (int i = 0; i < n; i++) {
            ctr = 0;
            shift(reguler, n);
            for (int j = 0; j < n; j++)
                if (reguler[j] > VIP[j])
                    ctr++;
            if (ctr > max)
                max = ctr;
        }
        printf("Case #%d: ", q);
        printf ("%d\n", max + n);
    }

    return 0;
}