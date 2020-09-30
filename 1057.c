#include <stdio.h>
#include <math.h>

int main() {
    
    double cat1, cat2, result;
    
    scanf("%lf", &cat1);
    scanf("%lf", &cat2);
    
    result = sqrt((pow(cat1,2) + pow(cat2,2)));
    printf("%.2lf", result);
	return 0;
}