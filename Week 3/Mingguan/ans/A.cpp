#include <stdio.h>
#define ll long long

int main(){
	
	//(1+2)x(3-4)
	ll int a, b, c, d, e, f, g, h, i, j, k, l, resultA, resultB, resultC, resultD, resultE, resultF;
	scanf ("(%lld+%lld)x(%lld-%lld)", &a, &b, &c, &d);
	getchar();
	scanf ("(%lld+%lld)x(%lld-%lld)", &e, &f, &g, &h);
	getchar();
	scanf ("(%lld+%lld)x(%lld-%lld)", &i, &j, &k, &l);
	getchar();
	resultA = a + b;
	resultB = c - d;
	resultC = e + f;
	resultD = g - h;
	resultE = i + j;
	resultF = k - l;
	printf ("%lld %lld %lld\n", resultA * resultB, resultC * resultD, resultE * resultF);

	
	
	return 0;
}
