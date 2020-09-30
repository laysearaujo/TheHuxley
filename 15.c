#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char nome [120];
    scanf("%[^\n]", nome);
    printf("Seja muito bem-vindo %s\n", nome);
	return 0;
}