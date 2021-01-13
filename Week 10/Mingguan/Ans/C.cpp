#include <stdio.h>
#include <string.h>

struct Employee {
    char name[55], div[55];
    int flag = 0;
};

void swap(char* a, char* b) {
    char temp[55];
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    Employee employee[110];
    /*
    * arti flag :
    * 1 -> aktif
    * 0 -> resign
    * -1 -> retired
    */
    int tc;
    scanf("%d", &tc); getchar();
    for (int q = 1; q <= tc; q++)
    {
        int n;
        scanf ("%d", &n); getchar();
        if (n == 1) // add employee
        {
            bool isValid = true;
            char name[55], gender[55], div[55];
            scanf ("%s", name); getchar();
            scanf ("%s", gender); getchar();
            scanf ("%s", div); getchar();
            int i = 1;                   // reminder : resign = slot kosong
            while(employee[i].flag != 0) // cek sampai ada slot kosong
                i++;
            for (int j = 1; j < 105; j++)
                if (strcmp(employee[j].name, name) == 0) // kalau ada nama yg sama dia skip
                {
                    isValid = false;
                    break;
                }
            if (isValid) // kalau tidak ada nama yg sama
            {
                strcpy(employee[i].name, name);
                employee[i].flag = 1; // set dia jadi pegawai aktif
            }
        }
        else if (n == 2) // swap employee
        {
            int a, b;
            scanf ("%d %d", &a, &b); getchar();
            if (employee[a].flag == 1 && employee[b].flag == 1) // syarat -> dua" nya harus pegawai aktif
            {
                swap(employee[a].name, employee[b].name);
                swap(&employee[a].flag, &employee[b].flag);
            }
        }
        else if (n == 3) //resign
        {
            int a;
            scanf ("%d", &a); getchar();
            employee[a].flag = 0; // set dia jd bisa di isi
        }
        else if (n == 4) // retired
        {
            int a;
            scanf("%d", &a); getchar();
            employee[a].flag = -1; // retired pegawai tidak bisa di apa"in lagi
        }
    }
    for (int i = 1; i <= 101; i++)
    {
        if (employee[i].flag == 1) // print hanya pegawai aktif
            printf ("%s\n", employee[i].name);
    }
    
    return 0;
}

/*
    TEST CASE
7
1
Jojo
Laki-laki
HRD
1
Lili
Perempuan
Management
1
Bibi
Perempuan
Accounting
2 1 2
3 2
4 1
1
Joli
Laki-laki
HRD
*/



