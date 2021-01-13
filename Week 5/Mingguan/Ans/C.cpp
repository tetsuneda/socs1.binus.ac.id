#include <stdio.h>
#define ll long long

int main(){

	int tc;
	scanf ("%d", &tc);
	for (int q = 1; q <= tc; q++)
	{
		ll int n, k, l = 0;
		scanf ("%d", &n);
		int arr[n][n], col = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				scanf ("%d", &arr[i][j]);
			}
		}
		printf ("Case #%d: ", q);
		for (int i = 0; i < n; i++)
		{
			col = 0;
			for (k = 0; k < n; k++)
			{
				col += arr[k][i];
			}
			printf ("%d", col);
			if (i != n - 1) printf (" ");
		}
		puts("");
	}

	return 0;
}

