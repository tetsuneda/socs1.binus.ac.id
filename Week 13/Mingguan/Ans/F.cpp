#include<stdio.h>

bool isPrimeNumber(int n) { 
    // true  = prime
    // false = not prime

    for(int i = 3; i * i <= n; i += 2)
        if(n % i == 0) 
            return false;
    return true;
}

int main() {
    int tc;
    scanf("%d", &tc); getchar();
    for (int q = 1; q <= tc; q++)
    {
        int n, counter = 2;
        scanf("%d", &n);
        printf("Case #%d:\n", q);
        for (int i = 1; i <= n; i++) 
        {
            for (int j = 1; j <= i; j++) 
            {
                while(!isPrimeNumber(counter))
                    counter += 2;
                
                printf("%d", counter % 10);
                if (i == 1)
                    counter++;
                else
                    counter += 2;
            }
            puts("");
        }
    }
    return 0;
}