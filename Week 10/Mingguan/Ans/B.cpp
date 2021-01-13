#include <stdio.h>
#include <string.h>

int main() {
    int n, ctr = 0;
    scanf ("%d", &n);
    char name[n + 1][255]; // store inputan
    for (int i = 0; i < n; i++)
        scanf ("%s", name[i]);
    char duplicated[n + 1][255]; // store nama yg duplicate
    for (int i = 0; i < n; i++)
    {
        bool present = false;
        for (int j = 0; j < n; j++)
        {
            if (strcmp(name[i], duplicated[j]) == 0) // cek dia udah keitung duplicate atau belum
            {
                present = true; // kalau dia udah keitung duplicate, dia ga bakal ngitung
                break;
            }
        }
        bool present2 = false;
        if (!present) // kalau dia belum keitung
        {
            for (int j = i + 1; j < n; j++)
            {
                if (strcmp(name[i], name[j]) == 0) // cek apakah ada nama yang duplicate
                {
                    present2 = true;
                    break;
                }
            }
        }
        if (present2) // jika ada yang duplicate
        {
            ctr++;
            strcpy(duplicated[i], name[i]); // tandain dia udah keitung
        }
    }
    printf ("You have %d duplicate name(s).\n", ctr);
    return 0;
}

/*
    TEST CASE
9
Tuna
Hanoi
Hanoi
Natnat
Natnat
Ceye
Diong
Tuna
Tuna
*/