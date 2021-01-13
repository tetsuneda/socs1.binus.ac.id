#include <stdio.h>

void preComp(int arr[], int n, int pre[])
{
    pre[0] = arr[0] * -1;
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0) pre[i] = (arr[i] * -1) + pre[i - 1];
        else pre[i] = arr[i] + pre[i - 1];
    }
}

int sum(int i, int j, int pre[], int arr[])
{
    if (i <= 0)
        return pre[j];
    if (i == j)
    {
        if (i % 2 == 0) return arr[j] * -1;
        else return arr[j];
        }
 
    return pre[j] - pre[i - 1];
}

int main(){

    int n,k;
    scanf ("%d %d", &n, &k);
    int arr[n], pre[n];
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &arr[i]);
        preComp(arr, n, pre);
    }
    // for (int i = 0; i < k; i++)
    // {
    //     int l,r;
    //     scanf ("%d %d", &l, &r);
    //     printf ("%d\n", sum(l - 1, r - 1, pre, arr));
    // }
    for (int i = 0; i < n; i++) printf ("%d ", pre[i]);
    return 0;
}