#include <stdio.h>
#include <string.h>

struct Data {
    int code;
    char name[55];
};

void swap(Data *a, Data *b) {
    int temp = a->code;
    a->code = b->code;
    b->code = temp;

    char tempName[55];
    strcpy(tempName, a->name);
    strcpy(a->name, b->name);
    strcpy(b->name, tempName);
}

int main() {

    FILE *fp = fopen("testdata.in", "r");
    int n;
    fscanf (fp, "%d\n", &n);
    Data data[n];
    for (int i = 0; i < n; i++)
        fscanf (fp, "%d#%[^\n]\n", &data[i].code, data[i].name);

    for (int i = 0; i < n - 1; i++)
        for (int j = i; j < n; j++)
            if (strcmp(data[i].name, data[j].name) > 0)
                swap(&data[i], &data[j]);

    for (int i = 0; i < n; i++)
        printf ("%d %s\n", data[i].code, data[i].name);

    return 0;
}

/*
10
901#Smallanthus sonchifolius
902#Yucca aloifolia
903#Olea europea
904#Zebrina pendula
905#Sasa fortunei
906#Bambusa jacobsii
907#Phycalis peruviana
908#Gendarusa vulgaris
909#Dimocarpus longan
910#Lichi chinensis
*/