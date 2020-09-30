#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x, h, min, s, a, b;
    scanf("%d", &x);
    h = x /(60*60);
    a = x % (60*60);
    printf("%d h ", h);
    min = a / 60;
    b = a % 60;
    printf("%d m ", min);
    s = b;
    printf("%d s", s);
    
	return 0;
}