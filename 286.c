#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    if(A == 1 && (B == 0 && C == 0) || A == 0 && (B == 1 && C == 1))
        printf("A\n");
    else if(B == 1 && ( A == 0 && C == 0) || B == 0 && (A == 1 && C == 1))
        printf("B");
    else if(C == 1 && (B == 0 && A == 0) || C == 0 && (B == 1 && A == 1))
        printf("C\n");
    else 
        printf("*\n");
	return 0;
}