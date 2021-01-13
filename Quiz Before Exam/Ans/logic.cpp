#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

int main() {

    char input[255];
    scanf ("%[^\n]", input); getchar();
    char words[255][255];
    int ctr = 0, j = 0;
    for (int i = 0; i <= strlen(input); i++)
    {
        if (input[i] == ' ' || input[i] == '\0')
        {
            words[ctr][j++] = '\0';
            ctr++;
            j = 0;
        }
        else
            words[ctr][j++] = input[i];
    }

    return 0;
}