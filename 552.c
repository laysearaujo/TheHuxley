#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
        int a, b, r, n, i;
    
    scanf("%i", &n);
    
        for(i=0;i<n;i++){
        
    scanf("%i %i", &a, &b);
    printf("MDC(%i,%i) = ", a, b);
     r = a%b;
    
    while(r!=0){ 
    a=b; 
    b=r;
    r=a%b;
    }
        printf("%i\n", b);
    
    
    }
	return 0;
}