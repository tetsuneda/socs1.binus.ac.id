#include <stdio.h>
#include <string.h>

int main() {

    int n;
    char target[255];
    scanf ("%d %s", &n, target); getchar();
    int length = strlen(target);
    char puzzle[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf ("%c", &puzzle[i][j]);
        getchar();
    }
    bool isFound = false;
    int pos = 0;

    //check right
    for (int i = 0; i < n; i++)
    {
        pos = 0;
        for (int j = 0; j < n; j++)
        {
            if (puzzle[i][j] == target[pos])
                pos++;
            
            else
                pos = 0;
            
            if (pos == length)
            {
                isFound = true;
                break;
            }
        }
        if (isFound)
            break;
    }


    //check left
    for (int i = 0; i < n; i++)
    {
        if (isFound)
            break;
        pos = 0;
        for (int j = n - 1; j >= 0; j--)
        {
            if (puzzle[i][j] == target[pos])
                pos++;

            else
                pos = 0;

            if (pos == length)
            {
                isFound = true;
                break;
            }
        }
    }

    //check down
    for (int i = 0; i < n; i++)
    { 
        if (isFound)
            break;
        pos = 0;
        for (int j = 0; j < n; j++)
        {
            if (puzzle[j][i] == target[pos])
                pos++;
            
            else
                pos = 0;
                
            if (pos == length)
            {
                isFound = true;
                break;
            }
        }
    }

    //check up
    for (int i = 0; i < n; i++)
    {
        if (isFound)
            break;
        pos = 0;
        for (int j = n - 1; j >= 0; j--)
        {
            if (puzzle[j][i] == target[pos])
                pos++;

            else
                pos = 0;
                
            if (pos == length)
            {
                isFound = true;
                break;
            }
        }
    }

    puts(isFound ? "YES" : "NO");

    return 0;
}

/*
5 KJSUA
ABCSD
AINDA
NNNNN
AUSJK
PSPSP

5 BINUS
ABCSD
AINDA
NNNNN
AUSJK
PSPSP

5 BNNK
ABCSD
AINDA
NNNNN
AUSJK
PSPSP
*/