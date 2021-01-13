#include <stdio.h>
#include <string.h>

int main() {

    FILE *fp = fopen("testdata.in", "r");

    int tc;
    fscanf(fp, "%d\n", &tc);
    for (int q = 1; q <= tc; q++)
    {
        long long int sum = 0;
        char arr[255];
        fscanf (fp, "%[^\n]\n", arr);
        printf("Case #%d: ", q);
        for (int i = 0; i < strlen(arr); i++)
            sum += arr[i] - '0';
        int lastDigit = arr[strlen(arr) - 1] - '0';
        if (sum % 3 == 0 && lastDigit % 2 == 0)
            puts("YES");
        else
            puts("NO");
    }
    fclose(fp);
    return 0;
}

/*
4
6
9
10
12
*/