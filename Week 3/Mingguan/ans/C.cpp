#include <stdio.h>
#define ll long long

int main(){
	
	int t;
	scanf ("%d", &t);
	for (int q = 0; q < t; q++)
	{
		
		double result1, a, b;
		scanf ("%lf %lf", &a, &b);
		result1 = (a*b)/360;
		printf ("%.2lf\n", result1);
	}
	
	
	return 0;
}
