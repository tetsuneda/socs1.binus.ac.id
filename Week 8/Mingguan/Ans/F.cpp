#include <stdio.h> 
#include <string.h>

int func(char a[], char b[], int m, int n){ 

    if ((m == 0 && n == 0) || n == 0) return 1; 
    if (m == 0) return 0; 
    if (a[m - 1] == b[n - 1]) return func(a, b, m - 1, n - 1) + func(a, b, m - 1, n); 
    else return func(a, b, m - 1, n); 
} 

int main(){ 
    int tc;
    scanf("%d", &tc); getchar();
    for (int q = 1; q <= tc; q++)
    {
        char a[255];
        char b[255];
        scanf ("%[^\n]", a); getchar();
        scanf ("%[^\n]", b); getchar();
        printf("Case #%d: ", q);
        printf ("%d\n", func(a, b, strlen(a), strlen(b)));
    }

    return 0; 
} 