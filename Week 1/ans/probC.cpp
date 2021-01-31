#include <stdio.h>

int main(){
	
	int a,b;
	scanf ("%d %d", &a, &b);
	for (int i = 0; i < b; i++){
		printf ("%d\n", a++);
	}
}
