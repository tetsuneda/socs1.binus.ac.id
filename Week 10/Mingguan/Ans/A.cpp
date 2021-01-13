#include <stdio.h>
#include <string.h>

struct Mhs {
    int date, month, year;
    char name[255], loc[255];
};

int main() {
    Mhs mahasiswa[110];
    int tc;
    int n;
    int tempDate, tempMonth, tempYear;
    char tempName[255], tempLoc[255];
    scanf("%d", &tc); getchar();
    for (int i = 1; i <= tc; i++)
    {
        // proses input data
        scanf ("%d %d %d %d %s %s", &n, &tempDate, &tempMonth, &tempYear, tempName, tempLoc); getchar();
        mahasiswa[i].date = tempDate;
        mahasiswa[i].month = tempMonth;
        mahasiswa[i].year = tempYear;
        strcpy(mahasiswa[i].name, tempName);
        strcpy(mahasiswa[i].loc, tempLoc);
    }

    int index;
    scanf ("%d", &index);
    for (int i = 1; i <= index; i++)
    {
        int out; // index yang mau di output
        scanf ("%d", &out);
        if (mahasiswa[out].name[0] != '\0') // cek ada datanya atau ga dari nama
            printf ("%d. %s was born on %d/%d/%d and live at %s\n", out, mahasiswa[out].name, mahasiswa[out].date, mahasiswa[out].month, mahasiswa[out].year,mahasiswa[out].loc);

        else
            puts("No data found!");
    }
    return 0;
}

/*
    TEST CASE
3
1 12 3 2001 jojo anggrek
2 7 6 2001 lili syahdan
4 25 4 2000 bibi kijang
5
1
2
3
4
5
*/