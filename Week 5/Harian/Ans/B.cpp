#include <stdio.h>
#define ll long long

int main(){

	int n;
	scanf ("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf ("*");
		}
		puts("");
	}

	return 0;
}

