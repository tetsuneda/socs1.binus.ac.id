#include <stdio.h>
#define ll long long

int main(){
	ll int tc;
	scanf ("%lld", &tc);
	for (ll int j = 1; j <= tc; j++)
	{
	ll int n;
	scanf ("%lld", &n);
	ll int a[n],min = 0, sum = 0;
	for (ll int i = 0; i < n; i++)
	{
		scanf ("%lld", &a[i]);
	}
	for (ll int i = 0; i < n; i++)
	{
		sum += a[i];
		if (min > sum) min = sum;
	}

	if (min <= 0)
	{
		min *= -1;
		min += 1;
	}
	printf ("Case #%lld: ", j);
	printf ("%lld\n", min);
}
	return 0;
}
