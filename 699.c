#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int ano, t;
    scanf("%d%d", &ano, &t);
    printf("%d ", ano+t);
    printf("%d ", ano+(2*t));
    printf("%d\n", ano+(3*t));
	return 0;
}