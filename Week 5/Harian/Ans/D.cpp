#include <stdio.h>
#define ll long long

int main(){

	int tc;
	scanf ("%d", &tc);
	for (int j = 1; j <= tc; j++)
	{
		int n;
		scanf ("%d", &n);
		printf ("Case #%d: ", j);
		if (n % 11 == 0 && n % 7 == 0) puts ("ElevenSeven");
		else if (n % 7 == 0) puts ("Seven");
		else if (n % 11 == 0) puts ("Eleven");
		else printf ("%d\n", n);
	}

	return 0;
}

