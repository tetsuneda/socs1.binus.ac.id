#include <stdio.h>
#define ll long long

int main(){

	int tc;
	scanf ("%d", &tc);
	for (int q = 1; q <= tc; q++)
	{
		int n;
		scanf ("%d", &n);
		int matriks[n][n], sum = 0, total = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				scanf ("%d", &matriks[i][j]);
			}
		}
	
		printf ("Case #%d: ", q);
		
		for (int i = 0; i < n; i++)
		{
			sum = 0;
		
			for (int j = 0; j < n; j++)
			{
				sum += matriks[j][i];
			}
			printf ("%d", sum);
			if (i != n - 1) printf (" ");
		}
		printf ("\n");
	}

	return 0;
}
