#include <stdio.h>
#include <string.h>

void swap (char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int tc;
    scanf("%d", &tc); getchar();
    for (int q = 1; q <= tc; q++)
    {
        char arr[255], arr1[25][255];
        int index = 0, j = 0, len[20] = {0};
        
        scanf ("%[^\n]", arr); getchar();
        for (int i = 0; i <= strlen(arr); i++)
        {

           if (arr[i] == ' ' || arr[i] == '\0')
           {
               arr1[index][j] = '\0';
               index++;
               j = 0;
           } 
           else arr1[index][j++] = arr[i];
        }

        printf("Case #%d: ", q);
        
        for (int i = 0; i < index; i++)
        {
            len[i] = strlen(arr1[i]);
            if (len[i] > 3)
            {
                if (len[i] % 2 == 0)
                {
                    for (int j = 1, k = len[i] - 2; j < len[i] / 2; j++, k--) swap(&arr1[i][j], &arr1[i][k]);
                }
                else
                {
                    for (int j = 1, k = len[i] - 2; j <= (len[i] / 2) - 1; j++, k--) swap(&arr1[i][j], &arr1[i][k]);               
                }
            }

            printf ("%s", arr1[i]);
            if (i < index - 1) printf (" ");
        }
        puts("");
    }

    return 0;
}