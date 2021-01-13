#include <stdio.h>
#define ll long long

int main(){
	
	ll int a,b,c,d;
	scanf ("%lld %lld %lld %lld", &a, &b, &c, &d);
	ll int result1 = a*b;
	ll int result2 = c+d;
	if (result1 > result2) puts ("True");
	else puts ("False");
	
	
	return 0;
}
