#include <stdio.h>

int main(){
	
	char name[255];
	scanf ("%[^\n]", name);
	printf ("Happy Birthday to %s.\n", name);
	
	
	return 0;
}
