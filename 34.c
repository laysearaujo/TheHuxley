#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n50=0, n20=0, n10=0, n5=0,n1=0, result=0, n, x=0;
    scanf("%d", &n);
    //printf("%d", n);
    while(result = n){
        if(n>=50){
            n50 = n/50;
            n = n % 50;
            result += n50 * 50;
        } else if (n>=20 && n<50){
            n20 = n / 20;
            n = n % 20;
            result += 20 * n20;
        } else if (n>=10 && n<20){
            n10 = n / 10; 
            n = n % 10; 
            result += 10 * n10;
        } else if (n>=5 && n<10){
            n5 = n / 5;
            n = n % 5;
            result += 5 * n5;
        } else if (n>=1 && n<5){
            n1 = n / 1;
            n = n % 1;
            result += 1 * n1;
        }
    } printf("Notas de 50: %d\nNotas de 20: %d\nNotas de 10: %d\nNotas de 5: %d\nNotas de 1: %d", n50, n20, n10, n5, n1);
	return 0;
}