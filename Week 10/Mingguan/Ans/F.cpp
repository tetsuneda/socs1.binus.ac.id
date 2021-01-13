#include <stdio.h>
#include <string.h>

struct Lili {
    char bookName[255];
    int id;
};

struct Bibi {
    char bookName[255];
    int id;
};

void merge(Lili* lili, Bibi* bibi, int* bibis, int n, int m) {
    int i = 0, j = 0, k = 0;
    /*
    * 1 -> buku lili
    * 2 -> buku bibi
    * i -> index buku lili
    * j -> index buku bibi
    * k -> bookshelf index
    */
    while (i < n && j < m) // selama salah satu masih ada buku
    {
        if (lili[i].id < bibi[j].id) //Jika id lili lebih kecil dari bibi
        {
            bibis[k++] = 1; // Masukin buku lili
			i++; // index buku lili aja yang di ++
        }
        else if(lili[i].id == bibi[j].id) // kalau idnya sama
        {
        	if (strcmp(lili[i].bookName, bibi[j].bookName) == 0) // kalau judul buku sama
        	{
        		bibis[k++] = 1; // masukin lili dulu
				bibis[k++] = 2; // baru masukin bibi
				i++;
				j++;
			}
            else
            {
	            if (strcmp(lili[i].bookName, bibi[j].bookName) < 0) // kalau judul buku lili alfabetnya lebih dahulu dari bibi
				{
		            bibis[k++] = 1; // masukin lili dulu
		            bibis[k++] = 2; // baru masukin bibi
		            i++;
		            j++;
         		}
         		else // kalau judul buku bibi yang alfabetnya lebih dahulu
         		{
         			bibis[k++] = 2; // masukin bibi dulu
		            bibis[k++] = 1; // baru masukin lili
		            i++;
		            j++;
				}
			}
        }
        else // kalau id bibi lebih besar dari lili
        {
        	bibis[k++] = 2; // masukin buku bibi
        	j++; // hanya index buku bibi yang di ++
		}
    }
    while (j < m) // kalau masih ada sisa buku bibi
    {
        bibis[k++] = 2; // masukin semua sisa buku bibi ke bookshelf
        j++;
	}
}

int main() {
    int tc;
    scanf("%d", &tc); getchar();
    for (int q = 1; q <= tc; q++)
    {
        int indexBook = 1;
        int n;
        scanf ("%d", &n); getchar();
        Lili lili[n]; // inisialisasi buku lili sebanyak n
        for(int i = 0; i < n; i++)
        {
            char name[255], author[255];
            int id;
            scanf ("%d %s %s", &id, name, author); getchar();
            strcpy(lili[i].bookName, name);
            lili[i].id = id;
        }
        int m;
        scanf ("%d", &m); getchar();
        Bibi bibi[m]; // inisialisasi buku bibi sebanyak m
        for (int i = 0; i < m; i++)
        {
            char name[255], author[255];
            int id;
            scanf ("%d %s %s", &id, name, author); getchar();
            strcpy(bibi[i].bookName, name);
            bibi[i].id = id;
        }
        int bibis[n + m + 5] = {0}; // penampung isi bookshelf
        merge(lili, bibi, bibis, n, m); // gabungkan ke bookshelf
        printf("Case #%d:\n", q);
        for (int i = 0; i < n + m; i++)
        {
            if (bibis[i] == 2) // hanya print yang index bibi
                printf ("%d\n", i + 1); // print posisi
        }
    }
    return 0;
}
/*
    TEST CASE
2
2
1 Merry John
3 Happy Paul
3
2 Quiet Vann
4 Liber Primus
6 Ace Mike
2
1 Merry John
3 Happy Paul
3
1 Merry Jhon
3 Haapy Raul
5 Ace Mike
*/
