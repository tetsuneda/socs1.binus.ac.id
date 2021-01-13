#include<stdio.h>
#include<math.h>

int main(){

	const double phi = 3.14159265359;
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    double side, root, result;
    side = (a*a) + (b*b) + (c*c);
    root = sqrt(side);
    result = side * phi;
    
    printf("%.2lf\n", result); 
    
    return 0;
}
