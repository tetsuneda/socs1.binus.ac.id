#include <stdio.h>
#define ll long long

int main(){
	
	ll int n, a, b;
	scanf ("%lld %lld %lld", &n, &a, &b);
	ll int arr[n], result1 = 0, result2 = 0;
	for (int i = 0; i < n; i++)
	{
		scanf ("%lld", &arr[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr[i] *= b;
			result2 += arr[i];

		}
		else if(arr[i] % 2 != 0)
		{
			arr[i] *= a;
			result1 += arr[i];

		}
	}
	printf ("%lld\n", result1+result2);
	
	
	return 0;
}
