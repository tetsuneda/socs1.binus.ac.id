#include <stdio.h>
#define ll long long

int main(){

	int tc;
	scanf ("%d", &tc);
	for (int j = 1; j <= tc; j++)
	{
		ll a, sum = 0, min = 0;
		scanf ("%lld", &a);
		ll arr[a];
		for (int i = 0; i < a; i++) scanf ("%lld", &arr[i]);
		
		for (int i = 0; i < a; i++)
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
		printf ("%lld\n", min);
		
	}

	return 0;
}

