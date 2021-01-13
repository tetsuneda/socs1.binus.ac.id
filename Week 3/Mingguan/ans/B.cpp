#include <stdio.h>
#define ll long long
/*
Diketahui       : a = 10 cm

t = 12 cm

t prisma = 20 cm

Ditanya: Berapa luas permukaan prisma segitiga?

Jawab:
Luas permukaan prisma segitiga = (2 x luas alas) + (3 x luas salah satu bidang tegak)
= (2 x (½ x 10 x 12)) + (3 x (20 x 10))
= 120 + 600
= 720 cm2
*/
int main(){
	
	double result, l, b, h, alas, bidang;
	scanf ("%lf %lf %lf", &l, &b, &h);
	alas = ((b*h)/2)*2;
	bidang = (l*b)*3;
	printf ("%.3lf\n", alas + bidang);
	
	
	
	return 0;
}
