#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double x, v;
    scanf("%lf", &x);
    v = x + (x*0.1);
    printf("%.2lf", v);
    
	return 0;
}