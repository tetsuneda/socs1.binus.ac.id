#include <stdio.h>
#define ll long long

int main(){
	
	double n, k, money;
	scanf ("%lf %lf", &n, &k);
	for (int i = 0; i < 3; i++)
	{
		money = n * k/100;
		n += money;
		
	}
	printf ("%.2lf\n", n);
	
	return 0;
}
