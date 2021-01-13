#include <stdio.h>
#include <string.h>

struct Employee
{
    char name[50];
    int salary[3];
};

// function untuk swap vertikal dan shift ke kanan
void swap(int *a, int *b) {
    int temp = *a;
    *a  = *b;
    *b = temp;
}

int main() {

    int tc, a, b;
    scanf("%d", &tc); getchar();
    for (int q = 1; q <= tc; q++)
    {
        /*
        * a -> banyak karyawan
        * b -> banyak operasi yang akan dilakukan
        */
        scanf ("%d %d", &a, &b);
        Employee emps[a + 5]; // inisialisasi data karyawan
        for (int i = 1; i <= a; i++)
        {
            // proses input data karyawan
            int j = 0;
            char name[55];
            int one,two,three;
            scanf ("%s %d %d %d", name, &one, &two, &three);
            strcpy(emps[i].name, name);
            emps[i].salary[j++] = one; // gaji bulan pertama
            emps[i].salary[j++] = two; // gaji bulan kedua
            emps[i].salary[j++] = three; // gaji bulan ketiga
        }
        int operations[b + 5][3]; // untuk menampung operasi yang akan dilakukan
        for (int i = 0; i < b; i++)
        {
            int op, one, two;
            scanf ("%d %d %d", &operations[i][0], &operations[i][1], &operations[i][2]);
            /*
            * operations[w][0] -> penampung operasi yang akan dilakukan (1 / 2)
            * operations[w][1] -> start from
            * operations[w][2] -> end
            */
        }
        for (int i = b - 1; i >= 0; i--) // lakukan operasi dari akhir ke awal / reversed
        {
            if (operations[i][0] == 1) // jika dia 1 -> swap vertikal
                for (int j = operations[i][1], k = operations[i][2]; j < k; j++, k--)
                {
                    swap(&emps[j].salary[0], &emps[k].salary[0]); // gaji bulan pertama
                    swap(&emps[j].salary[1], &emps[k].salary[1]); // gaji bulan kedua
                    swap(&emps[j].salary[2], &emps[k].salary[2]); // gaji bulan ketiga
                }
            else if (operations[i][0] == 2) // jika dia 2 -> shift ke kanan
            {
                for (int j = operations[i][1]; j <= operations[i][2]; j++)
                {
                    for (int k = 2; k > 0; k--)
                        swap(&emps[j].salary[k], &emps[j].salary[k - 1]); // shift ke kanan
                }
            }
        }
        printf("Case #%d:\n", q);
        for (int i = 1; i <= a; i++)
            printf ("%s %d\n", emps[i].name, emps[i].salary[2]); // print gaji bulan terakhir tiap karyawan
    }
    return 0;
}

/*
    TEST CASE
2
5 1
Bibi 20 30 40
Jojo12 9 8 9
Lili2  123 289 332
Jojo3 77 66 55
Lili4 12 90 31
1 2 5
5 5
Bibi 20 30 40
Jojo12 9 8 9
Lili2  123 289 332
Jojo3 77 66 55
Lili4 12 90 31
1 3 5
2 2 4
1 1 5
1 2 4
2 1 5
*/