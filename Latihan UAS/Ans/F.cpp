#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

int globalMax = -1;

void binser(int* arr, int left, int right, int x, int target) {

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        int temp = -1;
        if (arr[mid] != x)
            temp = arr[mid] + x;
        
        if (temp <= target && temp > globalMax)
        {
            globalMax = temp;
            left = mid + 1;
        }
        else if (temp <= target)
            left = mid + 1;
        
        else
            right = mid - 1;
    }
}

int main() {

    int n, target, ctr = -1;
    scanf ("%d %d", &n, &target);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf ("%d", &arr[i]);
    
    for (int i = 0; i < n; i++)
        binser(arr, 0, n - 1, arr[i], target);
    
    printf ("%d\n", globalMax);

    return 0;
}

/*
5 9
2 3 4 5 8

5 10
5 6 7 8 9
*/