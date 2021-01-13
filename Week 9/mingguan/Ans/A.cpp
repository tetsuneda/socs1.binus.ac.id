#include <stdio.h>

int sum(int* arr, int n) {
    if (n <= 0)
        return 0;
        
    return (sum(arr, n - 1) + arr[n - 1]); 
}

int main() {

    int tc;
    scanf("%d", &tc);
    for (int q = 1; q <= tc; q++)
    {
        int n;
        scanf ("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
            scanf ("%d", &arr[i]);
        printf("Case #%d: ", q);
        printf ("%d\n", sum(arr,n));
    }

    return 0;
}