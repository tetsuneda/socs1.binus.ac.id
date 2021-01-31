#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

struct Lecturer {
    char name[255];
    int id;
};

void merge(Lecturer* lec, int left, int mid, int right) {
    int leftSize = mid - left + 1;
    int rightSize = right - mid;
    Lecturer leftLec[leftSize], rightLec[rightSize];

    for (int i = 0; i < leftSize; i++)
        leftLec[i] = lec[left + i];
    
    for (int i = 0; i < rightSize; i++)
        rightLec[i] = lec[mid + i + 1];
    
    int i = 0, j = 0, k = left;

    while(i < leftSize && j < rightSize)
    {
        if (leftLec[i].id < rightLec[j].id)
            lec[k++] = leftLec[i++];
        else
            lec[k++] = rightLec[j++];
    }

    while(i < leftSize)
        lec[k++] = leftLec[i++];
    while(j < rightSize)
        lec[k++] = rightLec[j++];
}

void mergeSort(Lecturer* lec, int left, int right) {
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(lec, left, mid);
        mergeSort(lec, mid + 1, right);
        merge(lec, left, mid, right);
    }
}

int main() {

    int n;
    scanf ("%d", &n);
    Lecturer lec[n];
    for (int i = 0; i < n; i++)
        scanf ("%s %d", lec[i].name, &lec[i].id);
    
    mergeSort(lec, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf ("Lecturer #%d: %s\n", lec[i].id, lec[i].name);

    return 0;
}

/*
4
YBox420 3
PlashSpeed5 1
NinjidouSweet 4
PTX3090 2
*/