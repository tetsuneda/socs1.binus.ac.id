#include <stdio.h>
#include <string.h>

struct Data {
    char name[255];
    char tree[255];
};

int main() {

    FILE *fp = fopen("testdata.in", "r");
    int n;
    fscanf (fp, "%d\n", &n);
    Data data[n + 5];
    for (int i = 0; i < n; i++)
        fscanf (fp, "%[^#]#%[^\n]\n", data[i].name, data[i].tree);
    int tc;
    fscanf (fp, "%d\n", &tc);
    for (int q = 1; q <= tc; q++)
    {
        char name[255];
        fscanf (fp, "%[^\n]\n", name);
        printf("Case #%d: ", q);

        int i;
        for (i = 0; i < n; i++)
            if (strcmp(data[i].name, name) == 0)
                break;
                
        if (i < n)
            printf ("%s\n", data[i].tree);
        else
            puts ("N/A");
    }
    fclose (fp);
    return 0;
}

/*
10
Aaliyah#Fragaria
Briana#Quisqualis indica
Cameron#Bomabaceae
Daphne#Calodendrum capanse
Davina#Anthemis nobilis
Elsa#Cola acuminata
Fiona#Dracaena fragrans
Gwen#Fraxinus americana
Helen#Gazania
Irene#Gerbera jamesonii
5
Aaliyah
Irene
Davina
Elsa
Zacky
*/