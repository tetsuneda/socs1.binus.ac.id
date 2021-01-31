#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

int first(int* arr, int low, int high, int key) {
    int ans = -1;

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

int last(int* arr, int low, int high, int key) {
    int ans = -1;

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
            low = mid + 1;
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
        int target;
        scanf ("%d", &target);
        int start = first(arr, 0, n - 1, target);
        int end = last(arr, 0, n - 1, target);
        (start != -1) ? printf ("%d\n", end - start + 1) : puts("0");        
    }

    return 0;
}

/*
5 5
1 1 2 2 5
1
2
3
4
5

3 4
2 2 2
3
2
1
10
*/