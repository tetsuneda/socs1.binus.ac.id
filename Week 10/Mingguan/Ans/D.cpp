#include <stdio.h>
#include <string.h>

int main() {

    int tc;
    scanf("%d", &tc); getchar();
    for (int q = 1; q <= tc; q++)
    {
        char name[20];
        int group;
        int n;
        scanf ("%d", &n);
        char nameOnGroup[25][n + 1][20];
        int numberOfMember[55] = {0};
        for (int i = 0; i < n; i++)
        {
            scanf ("%s %d", name, &group);
            strcpy(nameOnGroup[group][numberOfMember[group]], name);
            numberOfMember[group]++;
            /*
            * example : name -> budi, group -> 1
            * berarti dia masuk ke nameOnGroup[1][0]
            */
        }
        printf("Case #%d:\n", q);
        for (int i = 1; i <= 20; i++)
        {
            if (numberOfMember[i]) // kalau ada membernya
            {
                printf ("Group %d(%d):\n", i, numberOfMember[i]); // example : Group 1(1)
                for (int j = 0; j < numberOfMember[i]; j++) // print semua membernya
                    printf ("%s\n", nameOnGroup[i][j]);
            }
        }
    }
    return 0;
}

/*
    TEST CASE
1
3
jojo 1
lili 2
bibi 1
*/