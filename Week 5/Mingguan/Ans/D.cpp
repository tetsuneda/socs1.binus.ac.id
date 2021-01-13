#include <stdio.h>
#define ll long long

int main(){

	int tc;
	scanf ("%d", &tc);
	for (int q = 1; q <= tc; q++)
	{
		int n;
		scanf ("%d", &n);
		
		int arr[n];
		for (int i = 0; i < n; i++) scanf ("%d", &arr[i]);
		printf ("Case #%d: ", q);
		
		for (int i = n - 2; i >= 0; i -= 2)
		{
			printf ("%d %d", arr[i], arr[i + 1]);
			if (i != 0) printf (" ");
		}
		puts("");
	}

	return 0;
}

