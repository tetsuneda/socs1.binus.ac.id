#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <Windows.h>

void rekursi(int m, int space)
{
 if (m == 0) return;
 else
 {
     rekursi(m/2, space+m/2);
     for (int i=1; i<=space; i++) printf(" ");
     for (int i=1; i<=m; i++) printf("*");
     puts("");
     rekursi(m/2, space);
 }
}

int main() {
	system("mode 800");
	SendInput(1);
    int n;
    int temp;
    scanf("%d", &n);
    if (n == 0) printf("*\n");
    else rekursi(pow(2,n), 0);
    
    return 0;
}
