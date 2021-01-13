#include <stdio.h>

int max = 0;
void func(int x, int l){
    if (x <= l)
    {
        if (max < x) max = x;
        func(x * 3, l);
        func(x * 4, l);
        func(x * 5, l);
    }
}
int main(){

    int tc;
    scanf("%d", &tc);
    for (int q = 1; q <= tc; q++)
    {
        int x, l;
        scanf ("%d %d", &x, &l);
        func(x, l);
        printf ("%d\n", max);
        max = 0;
    }

    return 0;
}