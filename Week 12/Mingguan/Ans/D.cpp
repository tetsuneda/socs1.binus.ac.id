#include <stdio.h>

void merge(int arr[], int left, int mid, int right) {
    // size untuk array left
    int leftSize = mid - left + 1;

    // size untuk array right
    int rightSize = right - mid;

    // inisialisasi array penampung
    int arrLeft[leftSize], arrRight[rightSize];

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

void mergeSort(int arr[], int left, int right) {
    // ketika dia tersisa satu element
    if (left >= right)
        return;

        // nilai tengah
        int mid = left + (right - left) / 2;

        // pisah element di kiri dulu
        mergeSort(arr, left, mid);

        // pisah element di kanan
        mergeSort(arr, mid + 1, right);

        // setelah semua element terpisah, kita gabungkan
        merge(arr, left, mid, right);

}

int binarySearch(int arr[], int left, int right, int target) 
{ 
    
    if (right >= left)
    { 
        // find the mid index
        int mid = left + (right - left) / 2; 

        // if the mid is the target, return the index
        if (arr[mid] == target) 
            return mid; 

        // if the mid's value is greater than the target, then go to right
        if (arr[mid] > target) 
            return binarySearch(arr, left, mid - 1, target); 

        // if the mid's value is less than the target, then go to left
        return binarySearch(arr, mid + 1, right, target); 
    } 

    // if the value is not in the array
    return -2; 
} 

int main() {

    // amount of data
    int n;
    scanf ("%d", &n);

    // initialize array of int with n size
    int arr[n];

    // data scanning
    for (int i = 0; i < n; i++)
        scanf ("%d", &arr[i]);

    // merge sort ascending
    mergeSort(arr, 0, n - 1);

    // testcase
    int tc;
    scanf("%d", &tc); getchar();

    
    for (int q = 1; q <= tc; q++)
    {
        // height that will be searched
        int target;
        scanf ("%d", &target);

        // print the index using binary search
        printf ("%d\n", binarySearch(arr, 0, n, target) + 1);
    }

    return 0;
}

/*
5
154 172 158 164 160
4
154
172
155
164
*/