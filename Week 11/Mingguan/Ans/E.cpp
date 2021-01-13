#include <stdio.h>

int main() {

    FILE *fp = fopen("testdata.in", "r"); // open the file
    int tc; // testcase
    fscanf (fp, "%d\n", &tc);
    for (int q = 1; q <= tc; q++)
    {
        int a, b; // size of the map
        fscanf (fp, "%d %d\n", &a, &b);
        char map[a + 1][b + 1];
        for (int i = 0; i < a; i++) // scan the map
            fscanf(fp, "%[^\n]\n", map[i]);

        printf("Case #%d:\n", q);
        int minX = 999, minY = 999, maxX = -1, maxY = -1;
        for (int i = 0; i < a; i++) // find minimum
        {
            int x = 999, y = 999;
            for (int j = 0; j < b; j++)
            {
                if (map[i][j] != '.')
                {
                    x = i;
                    y = j;
                }
                if (x < minX) // first occur char in row
                    minX = x;
                if (y < minY) // first occur char in col
                    minY = y;
            }
        }
        for (int i = 0; i < a; i++) // find maximum
        {
            int x = 0, y = 0;
            for (int j = 0; j < b; j++)
            {
                if (map[i][j] != '.')
                {
                    x = i;
                    y = j;
                }
                if (x > maxX) // last occur char in row
                    maxX = x;
                if (y > maxY) // last occur char in col
                    maxY = y;
            }
        }

        int row = maxX - minX, col = maxY - minY;
        
        printf ("%d %d\n", row + 1, col + 1);
        for (int i = minX; i <= maxX; i++)
        {
            for (int j = minY; j <= maxY; j++)
                printf ("%c", map[i][j]); // print the map from first occur to last occur
            puts("");
        }
    }
    fclose(fp);
    return 0;
}

/*
3
8 8
........
........
...K.b..
..15c.1.
..D.aN2.
........
........
........
4 4
a..1
....
....
c..b
2 5
.a...
.....
*/