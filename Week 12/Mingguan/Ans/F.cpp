#include <stdio.h>

void mergeD(long long int arr[], int left, int mid, int right) {
    // size untuk array left
    int leftSize = mid - left + 1;

    // size untuk array right
    int rightSize = right - mid;

    // inisialisasi array penampung
    long long int arrLeft[leftSize], arrRight[rightSize];

    // masukin nilai ke array left
    for (int i = 0; i < leftSize; i++)
        arrLeft[i] = arr[left + i];

    // masukin nilai ke array right
    for (int i = 0; i < rightSize; i++)
        arrRight[i] = arr[mid + i + 1];

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
        if (arrLeft[i] >= arrRight[j])
        {
            // masukin nilai array left ke array utama
            arr[k] = arrLeft[i];
            // index array left maju
            i++;
        }

        // kalau nilai array right lebih kecil dari array left
        else
        {
            // masukin nilai array right ke array utama
            arr[k] = arrRight[j];
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
        arr[k] = arrLeft[i];
        i++;
        k++;
    }

    // kalau masih ada sisa di array right
    while (j < rightSize)
    {
        // masukin semua nilai yang ada di array right ke array utama
        arr[k] = arrRight[j];
        j++;
        k++;
    }
}

void mergeSortD(long long int arr[], int left, int right) {
    // ketika dia tersisa satu element
    if (left >= right)
        return;

        // nilai tengah
        int mid = left + (right - left) / 2;

        // pisah element di kiri dulu
        mergeSortD(arr, left, mid);

        // pisah element di kanan
        mergeSortD(arr, mid + 1, right);

        // setelah semua element terpisah, kita gabungkan
        mergeD(arr, left, mid, right);

}
void mergeA(long long int arr[], int left, int mid, int right) {
    // size untuk array left
    int leftSize = mid - left + 1;

    // size untuk array right
    int rightSize = right - mid;

    // inisialisasi array penampung
    long long int arrLeft[leftSize], arrRight[rightSize];

    // masukin nilai ke array left
    for (int i = 0; i < leftSize; i++)
        arrLeft[i] = arr[left + i];

    // masukin nilai ke array right
    for (int i = 0; i < rightSize; i++)
        arrRight[i] = arr[mid + i + 1];

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
            arr[k] = arrLeft[i];
            // index array left maju
            i++;
        }

        // kalau nilai array right lebih kecil dari array left
        else
        {
            // masukin nilai array right ke array utama
            arr[k] = arrRight[j];
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
        arr[k] = arrLeft[i];
        i++;
        k++;
    }

    // kalau masih ada sisa di array right
    while (j < rightSize)
    {
        // masukin semua nilai yang ada di array right ke array utama
        arr[k] = arrRight[j];
        j++;
        k++;
    }
}

void mergeSortA(long long int arr[], int left, int right) {
    // ketika dia tersisa satu element
    if (left >= right)
        return;

        // nilai tengah
        int mid = left + (right - left) / 2;

        // pisah element di kiri dulu
        mergeSortA(arr, left, mid);

        // pisah element di kanan
        mergeSortA(arr, mid + 1, right);

        // setelah semua element terpisah, kita gabungkan
        mergeA(arr, left, mid, right);

}
int main() {

    int tc;
    scanf("%d", &tc); getchar();
    for (int q = 1; q <= tc; q++)
    {
        // amount of data
        int n;
        scanf ("%d", &n); getchar();

        // initialize first array, second array, and the result
        long long int arr1[n], arr2[n], res = 0;

        // scan first array
        for (int i = 0; i < n; i++)
            scanf ("%lld", &arr1[i]);

        // scan second array
        for (int i = 0; i < n; i++)
            scanf ("%lld", &arr2[i]);
        
        // sort ascending the first array
        mergeSortA(arr1, 0, n - 1);

        // sort descending the second array
        mergeSortD(arr2, 0, n - 1);

        // sum the dot product
        for (int i = 0; i < n; i++)
            res += arr1[i] * arr2[i];

        printf("Case #%d: ", q);
        printf ("%lld\n", res);
    }

    return 0;
}

/*
3
3
1 2 3
1 2 3
4
1 1 1 1
101 102 103 104
4
2 3 5 7
11 13 17 19
*/