#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c, d, e, i;
   
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);
        scanf("%d", &d);
        scanf("%d", &e);
        
    if((a==1 || b==1)&&(c==1 && d==1)&&(e==1)){
        printf("AVALIADO\n");
    }
    else{
        printf("0");
    }

	return 0;
}