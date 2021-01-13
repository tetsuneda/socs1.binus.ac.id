#include <stdio.h>

int main() {

    int tc;
    scanf("%d", &tc); getchar();
    for (int q = 1; q <= tc; q++)
    {
        int a;
        scanf ("%d", &a);
        int pA[a];
        for (int i = 0; i < a; i++)
            scanf ("%d", &pA[i]);
        
        int b;
        scanf ("%d", &b);
        int pB[b];
        for (int i = 0; i < b; i++)
            scanf ("%d", &pB[i]);
        
        int c;
        scanf ("%d", &c);
        int pC[c];
        for (int i = 0; i < c; i++)
            scanf ("%d", &pC[i]);

        int target;
        scanf ("%d", &target);

        int ctr = 0;
        for (int i = 0; i < a; i++)
            for (int j = 0; j < b; j++)
                for (int k = 0; k < c; k++)
                    if (pA[i] + pB[j] + pC[k] == target)
                        ctr++;
        
        printf ("Case #%d: ", q);
        printf ("%d\n", ctr);
    }

    return 0;
}

/*
3
3
1 2 3
3
3 2 1
3
5 1 3
7
5
1 3 7 10 9
4
2 5 12 8
3
13 23 22
100
3
2 3 5
3
3 5 2
3
5 2 3
10
*/