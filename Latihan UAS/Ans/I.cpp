#include<stdio.h>

int main() {
	
	long long a, b;
	scanf("%lld %lld", &a, &b);
	
	long long top = (b / 2) * 2;
	
	for (long long i = a; i <= b; i++)
		for (long long j = 1; j <= top; j *= 2)
        {
			if (i % j == 0 && (i / j) % 2 != 0)
            {
				printf("%lld %lld\n", i - (j - 1), i);
				break;
			}
		}

    return 0;
}

/*
1 16
*/