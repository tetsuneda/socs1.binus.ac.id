#include <stdio.h>


void print(int n, int ctr) {
    if (n > 0)
    {
        print(n - 1, ctr + 1);

        for (int j = 0; j < ctr; j++)
            printf (" ");

        for (int i = 0; i < n * 2 - 1; i++) 
            printf ("*");

        puts("");

        print(n - 1, ctr+1);
    }
}


int main(){

	int ctr = 0;
    int n;
    scanf ("%d", &n);
    print(n, ctr);
    return 0;
}
