#include <stdio.h>

void swap (int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int tc;
    scanf("%d", &tc);
    for (int q = 1; q <= tc; q++)
    {
        int n;
        scanf ("%d", &n);
        int arr[n], arr1[n];
        for (auto &&i : arr)    
            scanf ("%d", &i);
        for (auto &&i : arr1)
            scanf ("%d", &i);
        
    for (int i = 0; i < n - 1; i++)
    {
        swap(&arr1[i], &arr1[i + 1]);
    }
    for (auto &&i : arr1)
    {
        printf ("%d ", i);
    }
    }

    return 0;
}