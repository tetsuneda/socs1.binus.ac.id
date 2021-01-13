#include <stdio.h>

void factorize(long long n){
    
	int count = 0, flag = 0;
	while (n % 2 == 0)
	{
		n/= 2;
		count++;
	}

	if (count > 0)
	{
		printf ("2 ^ %d", count);
		flag = 1;
	}
   
    for (long long i = 3; i * i <= n; i += 2)
	{
		count = 0;
		while (n % i == 0)
		{
			count++;
            n = n / i;
        }
        
		if (count > 0)
		{
        	if (flag) printf (" * ");
        
			printf ("%d ^ %d", i, count);
			flag = 1;
        }  
    }
    
    if (n > 2)
	{
    	if (flag) printf (" * ");
		printf ("%d ^ 1", n);
	}
}

	

int main(){

	int t;
	scanf ("%d", &t);
	for (int i = 1; i <= t; i++)
	{
    	long long N;
   		scanf ("%d", &N);
   		printf ("Case #%d: ", i);
   		factorize(N);
   		puts ("");
	}
   return 0;
}
