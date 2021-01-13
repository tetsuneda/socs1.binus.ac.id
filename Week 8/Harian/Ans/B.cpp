#include <stdio.h>

int GCD(int a, int b) {
    if (b == 0) return a;
    return GCD(b, a % b);
}

int main(){

    int tc;
    scanf("%d", &tc);

    for (int q = 1; q <= tc; q++)
    {

        int n, max = 0;
        scanf ("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
            scanf ("%d", &arr[i]);
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                int res = GCD(arr[i], arr[j]);
                if (max < res)
                    max = res;
            }
        }
        printf ("Case #%d: %d\n",q, max);

    }
    return 0;
}

/*
4
5
10 25 15 30 50
4
10 11 34 22
3
1 17 33
3
5 5 7
*/
