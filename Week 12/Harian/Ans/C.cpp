#include <stdio.h>
#include <string.h>

void swap(char* a, char* b) {
    char temp[255];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void sort(char name[][255], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i; j < n; j++)
            if (strcmp(name[i], name[j]) > 0)
                swap(name[i], name[j]);
}

int main() {

    int tc;
    scanf("%d", &tc); getchar();
    for (int q = 1; q <= tc; q++)
    {
        int n, target;
        scanf ("%d %d", &n, &target); getchar();
        char name[n][255];

        // because base 0
        target--;
        
        for (int i = 0; i < n; i++)
        {
            scanf ("%[^\n]", name[i]);
            getchar();
        }

        sort(name, n);

        printf("Case #%d: ", q);
        printf ("%s\n", name[target]);

    }

    return 0;
}

/*
TEST CASE

1
16 8
hanna
clay
zach
tony
justin
tyler
bryce
jessica
courtney
alex
jeff
marcus
monty
sheri
skye
ryan
*/