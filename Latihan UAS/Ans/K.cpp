#include <stdio.h>
#include <string.h>

int main() {

    int n, m;
    scanf ("%d %d", &n, &m);
    char str[m + 1];
    char arr[n + 1][300] = {'\0'};
    scanf ("%s", str);
    
    for (int i = 0; i < m; i++)
    {
        int target;
        scanf ("%d", &target);
        for (int j = target; j <= n; j += target)
        {
                arr[j][strlen(arr[j])] = str[i];
                arr[j][strlen(arr[j]) + 1] = '\0';
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (strlen(arr[i]))
            printf ("%s\n", arr[i]);
        else
            printf ("%d\n", i % 10);
    }
    
    return 0;
}

/*
13 3
JLB
2 4 3
*/