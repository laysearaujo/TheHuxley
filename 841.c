#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double a, b, c, x;
    int num;
    num=0;
    scanf("%lf %lf %lf", &a, &b, &c);
    x= (a+b+c)/3;
    if(a>x){
        num++;
    }
    if(b>x){
        num++;
    }
    if(c>x){
        num++;
    }
    printf("%d", num);
	return 0;
}