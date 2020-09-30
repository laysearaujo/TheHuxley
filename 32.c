#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   
    double f, c;
    scanf("%lf", &f);
    c = (f-32) / 1.8;
    printf("%.2lf\n", c);
    
	return 0;
}