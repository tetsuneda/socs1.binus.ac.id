#include <stdio.h>
#define ll long long

int main(){
	
	int a, b, c, d, e, f, g, h, i, diag;
	scanf ("%d %d %d %d", &a, &e, &i, &c);
	diag = a + e + i;
    b = diag-a-c;
    f = diag-c-i;
    g = diag-c-e;
    h = diag-b-e;
    d = diag-a-g;
	printf ("%d %d %d\n%d %d %d\n%d %d %d\n" , a, b, c, d, e, f, g, h, i);
	return 0;
}
