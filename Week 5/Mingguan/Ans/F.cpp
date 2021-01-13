#include <stdio.h>
#define ll long long

int main(){

	int tc;
	scanf ("%d", &tc);
	for (int q = 1; q <= tc; q++)
	{
		ll int n, counter[1005] = {0};
		ll sum = 1, total = 0;
		scanf ("%lld", &n);
		int arr[n];
		for (int i = 0; i < n; i++) scanf ("%lld", &arr[i]);
		
		for (int i = 0; i < n; i++)
		{
			counter[arr[i]]++;
		}
		for (int i = 0; i < 1005; i++)
		{
			if (counter[i] >= 3)
			{
				sum = 1;
				for (int j = 0; j < 3; j++)
				{
					sum *= counter[i];
					counter[i]--;
				}
				sum /= 6;
				total += sum;
			}
		}
		
		
		printf ("Case #%d: ", q);
		printf ("%lld\n", total);
	}

	return 0;
}

