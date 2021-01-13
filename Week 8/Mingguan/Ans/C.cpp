#include <stdio.h>

int r = 1;
int arr1[10005] = {0};
int mult = 1;

void swap (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void function(int *arr, int j, int n){
    if(j == n){
        for(int i = n; i > 0; i--){
            arr1[r] += arr[i] * mult;
            mult *= 10;
        }
        r++;
        mult = 1;
        return;
    }
    else{
        for(int i = j; i <= n; i++){
            swap (&arr[j], &arr[i]);
            function(arr, j + 1, n);
            swap (&arr[j], &arr[i]);
        }
    }

}

int main(){

    int tc;
    scanf("%d", &tc);
    for(int q = 1; q <= tc; q++){
        int n;
        scanf("%d", &n);
        int arr[n + 5];
        
        for (int j = 1; j <= n; j++)
            arr[j] = j;

        printf("Case #%d:\n", q);
        function(arr, 1, n);

        for (int i = 1; i < r; i++)
            for (int j = i; j < r; j++)
                if (arr1[i] > arr1[j])
                    swap(&arr1[i], &arr1[j]);
        
        for (int i = 1; i < r; i++)
            printf ("%d\n", arr1[i]);

        for (int i = 1; i <= 10005; i++)
            arr1[i] = 0;

        r = 1;
    }

    return 0;
}


/*

1 2 3
^ ^ ^
0 1 2

1 2 3

mult = 100

3 * 1 -> 3
2 * 10 -> 20
1 * 100 -> 100
------------------
            123

*/