#include <stdio.h>
#define ll long long

int main(){

	int n, k, ctr = 0;
	scanf ("%d %d", &n, &k);
	int arr[n];
	for (int i = 0; i < n; i++) scanf ("%d", &arr[i]);
	
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % k == 0) ctr++;
	}
	printf ("%d\n", ctr);
	return 0;
}

