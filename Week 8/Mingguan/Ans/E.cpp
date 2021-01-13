#include <stdio.h>

long long int sum = 0;

void swap (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void function(int *arr, int j, int n){
    long long int res = 0, mult = 1;
    if(j==n){
        for(int i=1; i<=n; i++){
            res += arr[i] * mult;
            mult *= 10;
        }
        sum += res;
    }
    else{
        for(int i=j; i<=n; i++){
            swap (&arr[j], &arr[i]);
            function(arr, j+1, n);
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
        int arr[n];
        for (int j = 1, k = 1; j <= n; j++, k++) scanf ("%d", &arr[j]);
        printf("Case #%d: ", q);
        function(arr, 1, n);
        printf ("%lld\n", sum);
        sum = 0;
    }

    return 0;
}