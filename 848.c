#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define pi  3.1416

int main() {
    float r, area, v;
    
        scanf("%f", &r);
        
    area = 4 * pi * pow(r, 2);
    
    v = (4 * pi * pow (r, 3)) / 3;
    
        printf("%.2f\n%.2f", area, v);
        
	return 0;
}