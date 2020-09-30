#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
   
    char nomes[101][101]; 
    char aux[101], x;
    int sorteio, alunos, i;
    
    scanf("%d %d", &alunos, &sorteio);
    
    for(i=0; i<alunos; i++){
        scanf(" %s", &nomes[i]);
    }
    do{
        x=0;
        for(i=0; i<alunos-1; i++){
            if(strcmp(nomes[i], nomes[i+1])>0){
                strcpy(aux, nomes[i]);
                strcpy(nomes[i], nomes[i+1]);
                strcpy(nomes[i+1], aux);
                x=1;
            }
        }
    }while(x==1);
    
    
    printf("%s", nomes[sorteio-1]);
    
	return 0;
}