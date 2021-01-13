#include <stdio.h>
#include <string.h>

struct Data {
    char name[15];
    int deadline;
};

void swap(Data* a, Data* b) {
    char temp[1024];
    strcpy(temp, a->name);
    strcpy(a->name, b->name);
    strcpy(b->name, temp);

    int temp1;
    temp1 = a->deadline;
    a->deadline = b->deadline;
    b->deadline = temp1;
}

void sort(Data* data, int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i; j < n; j++)
            if (data[i].deadline > data[j].deadline)
                swap(&data[i], &data[j]);
}

void sortByName(Data* data, int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i; j < n; j++)
            if (data[i].deadline == data[j].deadline
                && strcmp(data[i].name, data[j].name) > 0)
                    swap(&data[i], &data[j]);
}

int main() {

    int n;
    scanf ("%d", &n); getchar();
    Data data[n];
    for (int i = 0; i < n; i++)
        scanf ("%s %d", data[i].name, &data[i].deadline);

    sort(data, n);
    sortByName(data, n);

    for (int i = 0; i < n; i++)
        printf ("%s\n", data[i].name);

    return 0;
}

/*
TEST CASE

4
algebra 7
english 7
algo 3
pdm 5
*/