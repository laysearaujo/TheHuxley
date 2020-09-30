#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define pi 3.14

int main() {
    
    double r, V;
    scanf("%lf", &r);
    V = (4 * pi * pow(r, 3)) / 3;
    printf("%.2lf\n", V);
    
	return 0;
}