#include <stdio.h>
#define ll long long

int main(){

	int tc;
	scanf ("%d", &tc);
	for (int j = 1; j <= tc; j++)
	{
		int n;
		scanf ("%d", &n);
		
		ll int a[n], sum = 0;
		for (int i = 0; i < n; i++) scanf ("%lld", &a[i]);
		
		printf ("Case #%d: ", j);
		
		ll max1 = a[0], max2 = a[0 + 1];
		
		for (int i = 0; i < n; i++)
		{
			if (max1 < a[i]) max1 = a[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (max2 < a[i] && a[i] != max1) max2 = a[i];
		}
		printf ("%lld\n", max1 + max2);
	}

	return 0;
}

