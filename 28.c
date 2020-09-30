#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x, x1, x2;
    scanf("%d", &x);
    x1 = x/10;
    x2 = x%10;
    if(x2==0)
        printf("%d\n", x1);
    else
        printf("%d%d\n", x2, x1);
	return 0;
}