#include <stdio.h>

int ctr = 0;
char map[50][50];
void find(int x, int y){
    //atas
    if (map[x - 1][y] == '.' || map[x - 1][y] == 'E' )
    {
        map[x - 1][y] = 'X';
        ctr++;
        find(x - 1, y);
    }
    //bawah
    if (map[x + 1][y] == '.' || map[x + 1][y] == 'E') 
    {
        map[x + 1][y] = 'X';
        ctr++;
        find(x + 1, y);
    }
    //kiri
    if (map[x][y - 1] == '.' || map[x][y - 1] == 'E')
    {
        map[x][y - 1] = 'X';
        ctr++;
        find(x, y - 1);
    }
    //kanan
    if (map[x][y + 1] == '.' || map[x][y + 1] == 'E')
    {
        map[x][y + 1] = 'X';
        ctr++;
        find(x, y + 1);
    }

}

int main() {
    int a, b, x, y;
    scanf ("%d %d", &a, &b); getchar();
    for (int i = 0; i < a; i++)
        scanf ("%s", map[i]);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (map[i][j] == 'S'){
                x = i;
                y = j;
            }
        }   
    }
    for (int i = 0; i < a; i++) printf ("%s\n", map[i]);
    find(x, y);
    puts("");
    // printf ("%d\n", ctr);
    for (int i = 0; i < a; i++) printf ("%s\n", map[i]);
    return 0;
}

/*
#########
####...##
###..#.##
###.##.E#
#S..#####
#########


######
#E..S#
######
#....#
######
*/