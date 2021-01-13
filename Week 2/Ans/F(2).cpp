#include <stdio.h>

int main(){
	
	char a[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf ("%c", &a[i][j]);
			getchar();
		}
	}
	
	printf ("  %c\n", a[0][0]);
	printf (" %c %c\n", a[1][0], a[0][1]);
	printf ("%c %c %c\n", a[2][0], a[1][1], a[0][2]);
	printf (" %c %c\n", a[2][1], a[1][2]);
	printf ("  %c\n", a[2][2]);
	
	return 0;
}

