#include <stdio.h>

int main(){

    int n;
    scanf ("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (j == arr[i] - 1) printf ("#");
            else printf (".");
        }
        puts("");
    }
    

    return 0;
}