#include <stdio.h>

int main() {

    int n, m;
    scanf ("%d %d", &n, &m);

    int station[n + 1] = {0};
    for (int i = 0; i < m; i++)
    {
        int src, dest;
        scanf ("%d %d", &src, &dest);
        station[src]++;
        station[dest]++;
    }

    bool isValid = false;
    if (m == n - 1)
    {
        for (int i = 1; i <= n; i++)
        {
            if (station[i] == n - 1)
            {
                isValid = true;
                break;
            }
            else
                isValid = false;
        }
    }
    
    if (isValid)
        puts("YES");
    else
        puts("NO");

    for (int i = 1; i <= n; i++)
        printf ("%d ", station[i]);

    return 0;
}

/*
4 3
3 1
2 3
4 3
*/