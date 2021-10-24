#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Passei em acm

int main() {
    
    int x, u;
    
    scanf("%d", &x);
    u = x % 10;
    
    if(x>=10){
        printf("%d", u);
    } 
    else if(x<10){
        printf("%d", u);
    }
    else{
        printf("-%d", u);
    }
    
	return 0;
}
