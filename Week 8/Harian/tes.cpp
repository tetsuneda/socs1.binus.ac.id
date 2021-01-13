#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

int main() {

    int tc;
    scanf("%d", &tc);
    for (int q = 1; q <= tc; q++)
    {
        int n;
        char list[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
        char arr[] = {"SAYA SUKA KAMU"};
        char arrNew[15];
        scanf ("%d", &n);
        for (int i = 0; i < 14; i++)
        {
            int newch = ((arr[i] - 'a') + n) % 26 + 'a';
            arrNew[i] = newch;
        }
        printf ("%s\n", arrNew);  

    }

    return 0;
}