#include <stdio.h>
#include <string.h>

struct Data {
    char city[1024];
    char metric;
    double temp;
    double celc;
};

void swap(Data* a, Data* b) {
    char temp[1024];
    strcpy(temp, a->city);
    strcpy(a->city, b->city);
    strcpy(b->city, temp);

    double temp1 = a->temp;
    a->temp = b->temp;
    b->temp = temp1;

    char met = a->metric;
    a->metric = b->metric;
    b->metric = met;

    temp1 = a->celc;
    a->celc = b->celc;
    b->celc = temp1;
}

void sort(Data* data, int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i; j < n; j++)
            if (data[i].celc > data[j].celc)
                swap(&data[i], &data[j]);
}

void sortByName(Data* data, int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i; j < n; j++)
            if (data[i].celc == data[j].celc
                && strcmp(data[i].city, data[j].city) > 0)
                    swap(&data[i], &data[j]);
}

int main() {

    FILE *fp = fopen("testdata.in", "r");
    int n = 0;
    Data data[155];
    while (fscanf(fp, "%[^#]#%lf#%c\n", data[n].city, &data[n].temp, &data[n].metric) != EOF)
        n++;
    
    for (int i = 0; i < n; i++)
    {
        if (data[i].metric == 'F')
            data[i].celc = ((data[i].temp - 32) * 5) / 9;
        else
            data[i].celc = data[i].temp;
    }

    sort(data, n);
    sortByName(data, n);

    for (int i = 0; i < n; i++)
        printf ("%s is %.2lf%c\n", data[i].city, data[i].temp, data[i].metric);
    

    return 0;
}

/*
TEST CASE

Jakarta#28#C
New York#37.4#F
Tokyo#9#C
London#9#C
Singapore#27#C
Vancouver#-1#C
Taipei#64.4#F
Denver#-4#C
Santiago#69.8#F
New Delhi#11#C
*/