#include <stdio.h>

int main() {

    FILE *fp = fopen("testdata.in", "r"); // read file
    int a, b;
    fscanf (fp, "%d %d\n", &a, &b); // scan a and b
    printf ("%d\n", a + b); // sum a and b
    fclose (fp);
    return 0;
}