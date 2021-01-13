#include <stdio.h>

int main(){

    int tc;
    scanf ("%d", &tc);
    for (int q = 1; q <= tc; q++)
    {
        int n;
        scanf ("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++) scanf ("%d", &arr[i]);
        printf ("Case #%d: ", q);
        for (int i = n - 1; i >= 0; i--)
        {
            printf ("%d", arr[i]);
            if (i != 0) printf (" ");
        }
        puts("");
    }

    return 0;
}