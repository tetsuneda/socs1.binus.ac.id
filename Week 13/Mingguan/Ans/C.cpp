#include <stdio.h>
#include <string.h>

struct Data {
    char NIM[255];
    char name[255];
};

int binarySearch(Data* data, int left, int right, char* target) {

    if (right >= left)
    {
        int mid = left + (right - left) / 2;

        if (strcmp(data[mid].NIM, target) == 0)
            return mid;

        if (strcmp(data[mid].NIM, target) > 0)
            return binarySearch(data, left, mid - 1, target);

        return binarySearch(data, mid + 1, right, target);
    }

    return -1;
}

int main() {

    FILE *fp = fopen("testdata.in", "r");
    int n;
    fscanf (fp, "%d\n", &n);
    Data data[n];
    for (int i = 0; i < n; i++)
        fscanf (fp, "%s %s\n", data[i].NIM, data[i].name);

    int tc;
    fscanf (fp, "%d\n", &tc);
    for (int q = 1; q <= tc; q++)
    {
        char target[15];
        fscanf (fp, "%s\n", target);
        printf("Case #%d: ", q);
        int pos = binarySearch(data, 0, n - 1, target);
        if (pos == -1)
            puts("N/A");
        else
            printf ("%s\n", data[pos].name);

    }

    return 0;
}

/*
13
2020123456 Liam
2020123457 Noah
2020123458 William
2020123459 James
2020123460 Logan
2020123461 Benjamin
2020123462 Mason
2020123463 Elijah
2020123464 Oliver
2020123465 Jacob
2020123466 Lucas
2020123467 Michael
2020123468 Alexander
4
2020123456
2020123468
2020123462
2020100000
*/