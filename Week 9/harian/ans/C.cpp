#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

int main() {

	int tc;
	scanf("%d", &tc); getchar();
	for (int q = 1; q <= tc; q++)
	{
		int n, k;
		scanf ("%d %d", &n, &k); getchar();
		unsigned long long int sumK = 0, sumE = 0, value;
		for (int i = 1; i <= n; i++)
		{
			scanf ("%llu", &value);
			if (i % k == 0)
				sumK += value;

			else
				sumE += value;
		}
		printf("Case #%d: ", q);
		printf ("%llu\n", (unsigned long long int)abs(sumK - sumE));
		
	}

	return 0;
}