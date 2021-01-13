#include <stdio.h>
#define ll long long

ll int func (int m, int n) {

	if (m == 0 || n == 0)
		return 1;
	return func(m - 1, n - 1) + func(m - 1, n) + func(m, n - 1);

}

int main(){

	ll int m, n;
	scanf ("%lld %lld", &m, &n);
	printf ("%lld\n", func(m, n));

	return 0;
}

