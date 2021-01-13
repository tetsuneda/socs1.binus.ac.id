#include <stdio.h>

int main(){

    int n;
    scanf ("%d", &n);
    int arr[n], index[n], arrNew[n];
    for (int i = 0; i < n; i++) scanf ("%d", &index[i]);
    for (int i = 0; i < n; i++) scanf ("%d", &arr[i]);
    for (int i = 0; i < n; i++)
    {
        arrNew[index[i]] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf ("%d", arrNew[i]);
        if (i != n - 1) printf (" ");
    }
    puts("");


    return 0;
}
