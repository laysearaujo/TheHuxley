#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define pi 3.1416

double VolumeEsfera(double r){
    double V = (4 * pi * pow(r,3))/3;
    return V;
}

int main() {
    double r, V, aux=0;
    while(aux!=3) {
        scanf("%lf", &r);
        V = VolumeEsfera(r);
        printf("%.2lf\n", V);
        aux++;
    }
	return 0;
}