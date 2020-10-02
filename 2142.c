
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

void retira(char *palavra){
    
    char frase[200] = "Aquilo que ", ponto[] = ".";
    int size = strlen(palavra);
    

    palavra[size-3] = '\0';
    
    strcat(palavra,ponto);
    setbuf(stdin,NULL);

    strcat(frase,palavra);

    printf("%s",frase);

    
}

int main() {
    
char palavra[200];
    
    scanf(" %[^\n]s ", palavra);
    
    retira(palavra);

    
    return 0;
}
