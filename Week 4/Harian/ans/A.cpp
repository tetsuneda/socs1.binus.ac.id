#include <stdio.h>
#define ll long long

int main(){
	
	for (int i = 0; i < 4; i++){
	double a, b, p;
	scanf ("%lf %lf", &a, &b);
	p = b / ((100 - a) / 100);
	printf ("$%.2lf\n", p);
	}
	
	
	return 0;
}
