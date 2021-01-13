#include <stdio.h>
#define ll long long

int main(){
	
	int n;
	scanf ("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++) scanf ("%d", &arr[i]);
	
	int q;
	scanf ("%d", &q);
	for (int z = 1; z <= q; z++)
	{
		int a, b;
		scanf ("%d %d", &a, &b);
		ll sum = 0;
		printf ("Case #%d: ", z);
		for (int i = a - 1; i < b; i++) sum += arr[i];
		printf ("%d\n", sum);
	}

	return 0;
}

