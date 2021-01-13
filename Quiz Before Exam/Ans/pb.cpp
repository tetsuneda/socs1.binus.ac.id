#include <stdio.h>

int first(int* arr, int low, int high, int key) {
    int ans = -2;

    while (low <= high)
    {
        int mid = low + (high - low + 1) / 2;
        int midVal = arr[mid];

        if (midVal < key)
            low = mid + 1;

        else if (midVal > key)
            high = mid - 1;

        else if (midVal == key) {
            ans = mid;
            high = mid - 1;
        }
    }

    return ans;
}

int main() {

    int n, m;
    scanf ("%d %d", &n, &m);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf ("%d", &arr[i]);
    for (int i = 0; i < m; i++)
    {
        int query;
        scanf ("%d", &query);
        printf ("%d\n", first(arr, 0, n - 1, query) + 1);
    }
    


    return 0;
}