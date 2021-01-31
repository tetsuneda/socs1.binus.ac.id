#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

struct Numbers {
    int num;
    int idx;
};

void swap(Numbers* a, Numbers* b) {
    Numbers temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int n;
    scanf ("%d", &n);
    int arrA[n];
    Numbers arrB[n];
    for (int i = 0; i < n; i++)
        scanf ("%d", &arrA[i]);
    for (int i = 0; i < n; i++)
    {
        scanf ("%d", &arrB[i].num);
        for (int j = 0; j < n; j++)
        {
            if (arrA[j] == arrB[i].num)
            {
                arrB[i].idx = j;
                break;
            }
        }
    }
    int ctr = 0;
    bool isValid;
    for (int i = 0; i < n - 1; i++)
    {
        isValid = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arrB[j].idx > arrB[j + 1].idx)
            {
                isValid = true;
                ctr++;
                swap(&arrB[j], &arrB[j + 1]);
            }
        }
        if (!isValid)
            break;
    }
    printf ("%d\n", ctr);

    return 0;
}

/*
5
1 2 5 3 4
5 1 4 2 3

7
1 3 5 7 9 13 11
13 11 9 7 5 3 1
*/