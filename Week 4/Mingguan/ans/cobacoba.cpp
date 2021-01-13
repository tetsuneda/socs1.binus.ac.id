#include <stdio.h>
#define ll long long

int main(){

	int tc;
	scanf ("%d", &tc);
	for (int j = 1; j <= tc; j++)
	{
		int n;
		scanf ("%d", &n);
		ll arr[n];
		for (int i = 0; i < n; i++) scanf ("%lld", &arr[i]);
		
		ll sum = 0, min = 0;
		for (int i = 0; i < n; i++)
		{
			sum += arr[i];
			if (min > sum) min = sum;
		}
		
		if (min <= 0)
		{
			min *= -1;
			min++;
		}
		printf ("Case #%d: ", j);
		printf ("%d\n", min);
	}

	return 0;
}

