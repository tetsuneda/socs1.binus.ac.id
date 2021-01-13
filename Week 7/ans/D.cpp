#include <stdio.h>

int main(){

    int tc;
    scanf("%d", &tc);
    for (int q = 1; q <= tc; q++)
    {
        long long int n;
        char arr[255];
        scanf ("%lld %s", &n, arr);
        printf("Case #%d: ", q);

        if (arr[n - 1] == '1')
        {
            if (arr[n - 2] == '1') printf("%sth\n", arr);
            else printf ("%sst\n", arr);
        }
        else if (arr[n - 1] == '2')
        {
            if (arr[n - 2] == '1') printf("%sth\n", arr);
            else printf ("%snd\n", arr);
        }        
        else if (arr[n - 1] == '3')
        {
            if (arr[n - 2] == '1') printf("%sth\n", arr);
            else printf ("%srd\n", arr);
        }        
        else printf ("%sth\n", arr);
    }
    return 0;
}

// 6 1 1 1 9 2 11 2 33 2 92 3 112