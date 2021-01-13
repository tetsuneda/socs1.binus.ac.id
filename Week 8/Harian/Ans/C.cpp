#include <stdio.h>
#include <string.h>

int saved[2000] = {0};

int fib(int n) {
	if (saved[n] != 0)
		return saved[n];
	
	else if (n == 0) return 0;
   	else if (n == 1) return 1;
   	saved[n] =  2 * n + fib(n - 1) + fib(n - 2);
   	return saved[n];
}

int main() {
   int n;
   scanf ("%d", &n);
   printf ("%d\n", fib(n));
   return 0;
}