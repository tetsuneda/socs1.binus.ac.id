#include <stdio.h>
#define ll long long

int main(){
	
	int n;
	scanf ("%d", &n);
	ll int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf ("%lld", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i + 1] == 1 || i == n - 1)
		{
			printf ("%lld", a[i]);
			if (i != n-1) printf (" ");
		}
	}
	puts("");
	
	return 0;
}
