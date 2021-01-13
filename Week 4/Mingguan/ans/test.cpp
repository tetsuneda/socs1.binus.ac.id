#include <stdio.h>
#define ll long long

int main(){

	ll n, x, y, resultGanjil = 0, resultGenap = 0;
	scanf ("%lld %lld %lld", &n, &x, &y);
	ll arr[n];
	for (int i = 0; i < n; i++)
	{
		scanf ("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr[i] *= y;
			resultGenap += arr[i];
		}
		else
		{
			arr[i] *= x;
			resultGanjil += arr[i];
		}
	}
	printf ("%lld\n", resultGanjil + resultGenap);
	return 0;
}

