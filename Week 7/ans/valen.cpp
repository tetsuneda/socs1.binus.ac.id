#include <stdio.h>

void preComp(int arr[], int n, int pre[], int k)
{
    pre[k - 1] = arr[k - 1];
    for (int i = k + 1; i < n; i+=k)
    {
        pre[i] = arr[i] + pre[i - k];
    }
}

int sum(int i, int j, int pre[], int arr[], int l, int r, int k)
{
    if (l == r)
    {
        if (r % k == 0) return arr[r - 1];
        else return 0;
    }
    if (i <= 0) return pre[j];

    return pre[j] - pre[i - 1];
}

int main(){

    int n, m, k;
    scanf ("%d %d %d", &n, &m, &k);
    int arr[n], pre[n] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &arr[i]);
        preComp(arr, n, pre, k);
    }
    for (int i = 0; i < m; i++)
    {
        int l, r;
        scanf ("%d %d", &l, &r);
        if (r % 2 == 0) printf ("%d\n", sum(l - 1, r - 1, pre ,arr, l, r, k));
        else printf ("%d\n", sum(l - 1, r - 2, pre ,arr, l, r, k));
    }


    return 0;
}