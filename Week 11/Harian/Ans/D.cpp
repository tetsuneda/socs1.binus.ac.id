#include <stdio.h>
#include <string.h>

int main() {

    FILE *fp = fopen("testdata.in", "r");
    unsigned long long int res = 1;
    while(!feof(fp))
    {
        char arr[255];
        fscanf (fp, "%[^\n]\n", arr);
        int ctr = 0;
        if (strlen(arr) > 1)
        {
            for (int i = 0; i < strlen(arr); i++)
            {
                if (arr[i] == ';')
                    ctr++;
                else
                    ctr = 0;

                if (ctr > 1)
                {
                    res *= 101;
                    res %= 1000000007;
                }
            }  
        }
        if (arr[0] == ';')
        {
            res *= 101;
            res %= 1000000007;
        }
    }
    printf ("%llu\n", res);
    fclose(fp);
    return 0;
}