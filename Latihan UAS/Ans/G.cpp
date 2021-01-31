#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

struct Numbers {
    int num;
    int sum;
};

void merge(Numbers* num, int left, int mid, int right) {
    int leftSize = mid - left + 1;
    int rightSize = right - mid;
    Numbers arrLeft[leftSize], arrRight[rightSize];

    for (int i = 0; i < leftSize; i++)
        arrLeft[i] = num[left + i];
    
    for (int i = 0; i < rightSize; i++)
        arrRight[i] = num[mid + i + 1];

    int i = 0, j = 0, k = left;

    while (i < leftSize && j < rightSize)
    {
        if (arrLeft[i].sum < arrRight[j].sum)
            num[k++] = arrLeft[i++];
        
        else if (arrLeft[i].sum > arrRight[j].sum)
            num[k++] = arrRight[j++];
        
        else if (arrLeft[i].sum == arrRight[j].sum)
        {
            if (arrLeft[i].num < arrRight[j].num)
                num[k++] = arrLeft[i++];
            else
                num[k++] = arrRight[j++];
        }
    }

    while (i < leftSize)
        num[k++] = arrLeft[i++];
    while (j < rightSize)
        num[k++] = arrRight[j++];
}

void mergeSort(Numbers* num, int left, int right) {
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(num, left, mid);
        mergeSort(num, mid + 1, right);
        merge(num, left, mid, right);
    }
}

int divisorSum(int x) {
    int sum = 0;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
            sum += i;
    }
    return sum;
}

int main() {

    int n;
    scanf ("%d", &n);
    Numbers num[n];
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &num[i].num);
        num[i].sum = divisorSum(num[i].num);
    }
    
    mergeSort(num, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        if (i != 0)
            printf (" ");
        printf ("%d", num[i].num);
    }
    puts("");

    return 0;
}

/*
5
1 13 6 7 2

10
1 2 3 4 5 6 7 8 9 10
*/