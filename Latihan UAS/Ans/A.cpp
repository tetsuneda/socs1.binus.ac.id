#include <stdio.h>
//#include <stdlib.h>
#include <string.h>

struct Depature {
    char name[255];
    char time[6];
};

struct Arrival {
    char name[255];
    char dest[255];
};

int main() {

    int n;
    scanf ("%d", &n); getchar();
    Depature dep[n];
    Arrival arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf ("%s %[^\n]", dep[i].name, dep[i].time);
        getchar();
    }

    for (int i = 0; i < n; i++)
    {
        scanf ("%s %[^\n]", arr[i].name, arr[i].dest);
        getchar();
    }

    for (int i = 0; i < n; i++)
    {
        int pos = -1;
        for (int j = 0; j < n; j++)
        {
            if (strcmp(arr[j].name, dep[i].name) == 0)
            {
                pos = j;
                break;
            }
        }
        printf ("%s %s %s\n", dep[i].name, dep[i].time, arr[pos].dest);
    }

    return 0;
}

/*
6
TR000 07:00
TR001 09:00
TR002 11:00
TR003 13:00
TR004 15:00
TR005 17:00
TR003 ASO ALSUT
TR002 ALSUT ASO
TR000 ANGGREK BEKASI
TR004 BEKASI ANGGREK
TR001 ALSUT ANGGREK
TR005 ANGREK ALSUT
*/