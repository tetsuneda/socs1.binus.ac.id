#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp = fopen("testdata.in", "r");
    int tc;
    fscanf (fp, "%d\n", &tc);
    for (int q = 1; q <= tc; q++)
    {
        char name[255];
        fscanf (fp, "%[^\n]\n", name);
        int op, flag[100] = {0};
        fscanf (fp, "%d\n", &op);
        char a, b;
        for (int i = 0; i < op; i++)
        {
            fscanf (fp, "%c %c\n", &a, &b);
            for (int j = 0; j < strlen(name); j++)
                if (name[j] == a && flag[a] == 0)
                    name[j] = b;
            flag[a] = 1;
        }

        int ctr[100] = {0};
        for (int i = 0; i < strlen(name); i++)
            ctr[name[i]]++;

        for (int i = 0; i < 100; i++)
        {
            if (ctr[i])
                printf ("%c %d\n", i, ctr[i]);
        }
    }
    fclose(fp);
    return 0;
}

/*
1
JOJO
2
J L
O I
*/