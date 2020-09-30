#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x, a, b, c;
    scanf("%d", &x);
    a = x / 100;
    b = (x / 10) - (10 * a);
    c = x  - ((100 * a) + (10 * b));
    
    if(a>0 && b>0 && c>0){
        printf("%d%d%d",c, b, a);
    } else if(b>0 && c>0 && a==0)  {
        printf("%d%d", b, a);
    }else if (a>0 && b==0 && c==0){
        printf("%d\n", a);
    }else{
         printf("%d%d%d",c, b, a);
    }
	return 0;
}