#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double x, media=0, result;
    int i=0;
    
    while(x!=999){
        scanf("%lf", &x);
        if(x>2){
        media += x-2;
        i++;   
        }
    }
     
    result = (media - 997)*12.89;
    
    printf("%.2lf\n%d\n", result, i-1);

    return 0;
}