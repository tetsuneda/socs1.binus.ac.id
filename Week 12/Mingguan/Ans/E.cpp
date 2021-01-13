#include <stdio.h>

struct Data
{
    long long int value;
    long long int index;
};


void merge(Data* data, int left, int mid, int right) {
    // size untuk array left
    int leftSize = mid - left + 1;

    // size untuk array right
    int rightSize = right - mid;

    // inisialisasi array penampung
    long long int arrLeft[leftSize], arrRight[rightSize], arrIndexLeft[leftSize], arrIndexRight[rightSize];

    // masukin nilai ke array left
    for (int i = 0; i < leftSize; i++)
    {
        arrLeft[i] = data[left + i].value;
        arrIndexLeft[i] = data[left + i].index;
    }

    // masukin nilai ke array right
    for (int i = 0; i < rightSize; i++)
    {
        arrRight[i] = data[mid + i + 1].value;
        arrIndexRight[i] = data[mid + i + 1].index;
    }

    // merge algorithm start

    // starting index array left
    int i = 0;

    // starting index array right
    int j = 0;

    // index untuk array utama
    int k = left;

    // ketika kedua sub array masih ada isinya
    while(i < leftSize && j < rightSize)
    {
        // kalau nilai array left lebih kecil dari array right
        if (arrLeft[i] <= arrRight[j])
        {
            // masukin nilai array left ke array utama
            data[k].value = arrLeft[i];
            data[k].index = arrIndexLeft[i];
            // index array left maju
            i++;
        }

        // kalau nilai array right lebih kecil dari array left
        else
        {
            // masukin nilai array right ke array utama
            data[k].value = arrRight[j];
            data[k].index = arrIndexRight[j];
            // index array right maju
            j++;
        }

        // setelah memasukkan nilai ke array utama, index array utama maju
        k++;
    }

    // kalau masih ada sisa di array left
    while (i < leftSize)
    {
        // masukin semua nilai yang ada di array left ke array utama
        data[k].value = arrLeft[i];
        data[k].index = arrIndexLeft[i];
        i++;
        k++;
    }

    // kalau masih ada sisa di array right
    while (j < rightSize)
    {
        // masukin semua nilai yang ada di array right ke array utama
        data[k].value = arrRight[j];
        data[k].index = arrIndexRight[j];
        j++;
        k++;
    }
}

void mergeSort(Data* data, int left, int right) {
    // ketika dia tersisa satu element
    if (left >= right)
        return;

        // nilai tengah
        int mid = left + (right - left) / 2;

        // pisah element di kiri dulu
        mergeSort(data, left, mid);

        // pisah element di kanan
        mergeSort(data, mid + 1, right);

        // setelah semua element terpisah, kita gabungkan
        merge(data, left, mid, right);

}

int main() {

    // testcase
    int tc;
    scanf("%d", &tc); getchar();
    for (int q = 1; q <= tc; q++)
    {
        // amount of data
        int n;
        scanf ("%d", &n);
        
        // initialize array of struct Data with n size
        Data data[n];

        // data scanning
        for (long long int i = 0; i < n; i++)
        {
            scanf ("%lld", &data[i].value);
            data[i].index = i;
        }
        
        // sort ascending by value
        mergeSort(data, 0, n - 1);

        // get the num
        long long int num = 1;
        long long int temp[n] = {0};

        // set the first value is 1
        temp[data[0].index] = 1;

        for (int i = 1; i < n; i++)
        {
            // if the next value is greater than the previous one, +1 the num
            if (data[i].value > data[i - 1].value)
                num++;
            temp[data[i].index] = num;
        }
        printf("Case #%d: ", q);
        for (int i = 0; i < n; i++)
        {
            printf ("%d", temp[i]);
            if (i < n - 1)
                printf (" ");
        }
        puts("");
        // printf ("Value : ");
        // for (int i = 0; i < n; i++)
        // {
        //     printf ("%d", data[i].value);
        //     if (i < n - 1)
        //         printf (" ");
        // }
        // puts("");
        // printf ("Index : ");
        // for (int i = 0; i < n; i++)
        // {
        //     printf ("%d", data[i].index);
        //     if (i < n - 1)
        //         printf (" ");
        // }
        // puts("");
    }

    return 0;
}
/*
3
5
1 999 888 100 400
8
5 5 1 6 1 6 1 1
5
-30 -30 30 0 -10000

3
5
-132 511 -24 -424 9424
5
48 -421 1421 -44 1322
6
141 12 -313 123 -42 -14
*/