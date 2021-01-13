#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

int main() {

    int n;
    scanf ("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf ("%d", &arr[i]);
    
    int tc;
    scanf("%d", &tc); getchar();
    for (int q = 1; q <= tc; q++)
    {
        int a, b, ctr = 0;
        scanf ("%d %d", &a, &b);

        int i, j;
        for (i = 0; i < n; i++)
            if (arr[i] >= a)
                break;

        for (j = 0; j < n; j++)
            if (arr[j] > b)
                break;
                
        printf("Case #%d: ", q);
        printf ("%d\n", j - i);
            
    }

    return 0;
}

/*
10
1 3 5 8 12 16 28 69 153 9999
8
1 3
1 5
1 199
4 500
152 152
70 152
153 153
153 9998
*/