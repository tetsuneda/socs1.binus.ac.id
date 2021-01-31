#include <stdio.h>
#include <string.h>

struct Data {
    char NIM[255];
    char name[255];
};

char* binarySearch(Data* data, int left, int right, char* target) {

    if (right >= left)
    {
        int mid = left + (right - left) / 2;

        if (strcmp(data[mid].NIM, target) == 0)
            return data[mid].name;

        if (strcmp(data[mid].NIM, target) > 0)
            return binarySearch(data, left, mid - 1, target);

        return binarySearch(data, mid + 1, right, target);
    }
    return (char*)"N/A";
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
        printf ("%s\n", binarySearch(data, 0, n - 1, target));
    }

    return 0;
}