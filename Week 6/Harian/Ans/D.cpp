#include <stdio.h>

int main(){
    int n;
    scanf ("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) scanf ("%d", &arr[i]);

    int max1 = arr[0], max2 = arr[0 + 1];
    for (int i = 0; i < n; i++)
    {
        if (max1 < arr[i]) max1 = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (max2 < arr[i] && arr[i] != max1) max2 = arr[i];
    }
printf ("%d\n", max2);

    return 0;
}