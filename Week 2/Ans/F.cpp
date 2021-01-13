#include <stdio.h>

int main(){
	
	char a, b, c, d, e, f, g, h, i;
	scanf ("%c %c %c", &a, &b, &c);
	getchar();
	scanf ("%c %c %c", &d, &e, &f);
	getchar();
	scanf ("%c %c %c", &g, &h, &i);
	getchar();
	printf ("  %c\n", a);
	printf (" %c %c\n", d, b);
	printf ("%c %c %c\n", g, e, c);
	printf (" %c %c\n", h, f);
	printf ("  %c\n", i);
	
	return 0;
}
