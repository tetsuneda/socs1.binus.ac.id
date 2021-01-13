#include <stdio.h>
#define ll long long

int main(){

	char a, b, c;
	scanf ("%c %c %c", &a, &b, &c);

		if (a < b && a < c)
		{
			if (b < c) puts ("1 2 3");
			else puts ("1 3 2");
		}
		if (b < a && b < c)
		{
			if (a < c) puts ("2 1 3");
			else puts ("2 3 1");
		}
		if (c < a && c < b)
		{
			if (a < b) puts ("3 1 2");
			else puts ("3 2 1");
}
	return 0;
}

