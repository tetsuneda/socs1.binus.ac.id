#include <stdio.h>
#include <string.h>

int main() {

    FILE *fp = fopen("testdata.in", "r");
    int tc;
    fscanf (fp, "%d\n", &tc);
    for (int q = 1; q <= tc; q++)
    {
        int n;
        fscanf (fp, "%d\n", &n);
        char arr[1005][1055];
        for (int i = 0; i < n; i++)
            fscanf (fp, "%[^\n]\n", arr[i]);
        
        printf("Case #%d: ", q);

        int idxPre = 0; // index prefix
        int idxSuf = strlen(arr[0]); // index suffix

        //find the prefix
        for (int i = 0; i < strlen(arr[0]); i++)
        {
            int ctrPre = 0;
            for (int k = 0; k < n; k++)
                if (arr[0][i] == arr[k][i])
                    ctrPre++;

            if (ctrPre == n) // if all char in every row is same
                idxPre++;
            else // if at least one char is not same
                break;
        }

        //find the suffix
        for (int i = strlen(arr[0]) - 1, j = 1; i >= 0; i--, j++)
        {
            int ctrSuf = 0;
            for (int k = 0; k < n; k++)
            {
                if (arr[0][i] == arr[k][strlen(arr[k]) - j])
                    ctrSuf++;
                // it's not guaranteed all words has the same length
                // so we must check from the last char in the word
            }
            if (ctrSuf == n) // if all chars in every row is same
                idxSuf--;
            else // if at least one char is not same
                break;
        }
        
        for (int i = 0; i < idxPre; i++) // print from first char until prefix's index
            printf ("%c", arr[0][i]);

        for (int i = idxSuf; i < strlen(arr[0]); i++) // print from suffix's index until end
            printf ("%c", arr[0][i]);

        puts("");
    }
    fclose(fp);
    return 0;
}

/*
4
3
HahaRoFL
HahaKeFL
HahaLUFL
3
HahaKEKW
HahaLulw
HahaROFW
3
hAHARoFL
HahaKeFL
HahaLUFL
3
HAHAROFL
HAHAROFL
HAHAROFL
*/