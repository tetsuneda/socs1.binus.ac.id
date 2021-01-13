#include <stdio.h>

void swap (int *a, int *b){
    int temp= *a;
    *a = *b;
    *b = temp;
}

int main(){
    int tc;
    scanf ("%d", &tc);
    for (int q = 1; q <= tc; q++)
    {
    int n;
    scanf ("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf ("%d", &arr[i]);
    int temp = arr[0];
    printf ("Case #%d: ", q);
    for (int i = 0; i < n - 1; i++)
    {
        swap(&arr[i], &arr[i + 1]);
    }
    // arr[n - 1] = arr[0];
    for (int i = 0; i < n; i++)
    {
        printf ("%d", arr[i]);
        if (i != n - 1) printf (" ");
    }
    puts ("");

    }


    return 0;
}
