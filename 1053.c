#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define pi 3.14

int main() {
    
    double h, r, At, Al, Ab, V;
    
    scanf("%lf", &h);
    scanf("%lf", &r);
    
    Al = 2 * pi * r * h;
    Ab = pi * (r*r);
    At = Al + 2*Ab;
    
    V = Ab * h;
    
    printf("%.2lf\n", V);
    printf("%.2lf\n", At);
    
    
	return 0;
}