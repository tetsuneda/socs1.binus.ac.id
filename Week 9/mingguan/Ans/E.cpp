#include <stdio.h>

//Funcion untuk swap
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

//Function untuk shift
void rotate(int* arr, int n) {
    int temp = arr[n - 1];
    for (int i = n - 1; i > 0; i--)
        swap(&arr[i], &arr[i - 1]);

    // arr[0] = temp;
}

int main() {

    int tc;
    scanf("%d", &tc);
    for (int q = 1; q <= tc; q++)
    {
        int n, ctr = 0, max;
        scanf ("%d", &n);
        
        int arr[n], arr1[n];

        for (int i = 0; i < n; i++)
            scanf ("%d", &arr[i]);

        for (int i = 0; i < n; i++)
            scanf ("%d", &arr1[i]);

        //Hitung berapa jumlah yg happy saat input
        //Siapa tau nilai max itu yg hasil inputan
        for (int i = 0; i < n; i++)
            if (arr[i] < arr1[i])
                ctr++;

        max = ctr;
        ctr = 0;

        for (int i = 0; i < n; i++)
        {
            //Shift sebanyak N -> jika ukuran array itu 3, maka ada 3 kemungkinan nilai max
            rotate(arr1, n);
            for (int j = 0; j < n; j++)
            {
                if (arr1[j] > arr[j])
                    ctr++;
            }
            if (max < ctr) max = ctr; //Mencari nilai max
            ctr = 0;
        }
        printf("Case #%d: ", q);
        printf ("%d\n", max + n);
    }   

    return 0;
}

/*

1 4 2
5 1 2
^ x x

1 4 2 -> 3
2 5 1
^ ^ x -> 2

1 4 2
1 2 5
x x ^

5 1 2
5 2 1
--------
2 5 1

////////////////////////////

int a = 5
int b = 7

temp -> 5
a = b
a = 7

b = temp
b = 5

*/