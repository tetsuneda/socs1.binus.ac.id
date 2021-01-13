#include <stdio.h>
#include <string.h>

struct Mhs {
    int date, month, year;
    char name[255], loc[255];
};

int main() {
    Mhs mahasiswa[110]; // initialize array of mahasiswa with n size
    int tc; // number of data to be stored
    int n; // for pointing data's index that will be inputted
    int tempDate, tempMonth, tempYear; // temporary variable for input
    char tempName[255], tempLoc[255]; // temporary variable for input
    scanf("%d", &tc); getchar();
    for (int i = 0; i < tc; i++)
    {
        // proses input data
        scanf ("%d %d %d %d %s %s", &n, &tempDate, &tempMonth, &tempYear, tempName, tempLoc); getchar();
        mahasiswa[n].date = tempDate; // store date to index n
        mahasiswa[n].month = tempMonth; // store month to index n
        mahasiswa[n].year = tempYear; // store year to index n
        strcpy(mahasiswa[n].name, tempName); // store name to index n
        strcpy(mahasiswa[n].loc, tempLoc); // store location to index n
    }

    int index;
    scanf ("%d", &index);
    for (int i = 1; i <= index; i++)
    {
        int out; // index that will be outputted
        scanf ("%d", &out);
        if (mahasiswa[out].name[0] != '\0') // check the data if present or not
            printf ("%d. %s was born on %d/%d/%d and live at %s\n", out, mahasiswa[out].name, mahasiswa[out].date, mahasiswa[out].month, mahasiswa[out].year,mahasiswa[out].loc);
            // if data is present, then print the data in format
        else
            puts("No data found!"); // if data is not present in the requested index, then print this
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
