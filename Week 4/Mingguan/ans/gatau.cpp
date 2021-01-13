#include <stdio.h>
#define ll long long

int main(){

	int n;
	scanf ("%d", &n);
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++) printf ("-");
		for (int j = 1; j <= i; j++)
		{
		printf ("*");
		}
		for (int j = 1; j <= n - i; j++) printf ("-");
		puts("");
	}
	
	for (int i = n - 1; i > 0; i--)
	{
		for (int j = 1; j <= n - i; j++) printf ("-");
		for (int j = i - 1; j >= 1; j--) printf ("*");
		for (int j = 1; j <= n - i; j++) printf ("-");
		puts("");
	}

	return 0;
}

