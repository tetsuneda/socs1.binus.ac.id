#include <stdio.h>
#include <string.h>
#define ll long long

int main(){

	char init[6];
	scanf ("%s", init);
	
	if ((init[0 ... 1] >= 'A' && init[0 ... 1] <= 'Z') && (init[2 ... 3] >= '0' && init[2 ... 3] <= '9') && (init[4] == '-') && (init[5] >= '0' && init[5] <= '9'))
	{
	
		puts ("right format");
	}
	else puts ("wrong format");
	return 0;
}

