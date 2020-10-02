#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int competidores,voltas,cont,menor = 100000000000000000000,menorposic;
    scanf("%d %d",&competidores,&voltas);
    int matriz[competidores][voltas];
    int soma[competidores];


    for (int i = 0 ; i < competidores ; i++) {
        for (int j = 0 ; j < voltas; j++){
            scanf("%d",&matriz[i][j]);
        }
    }

    for (int i = 0 ; i < competidores ; i++) {
        for (int j = 0 ; j < voltas; j++){
            cont = cont + matriz[i][j];
        }
    soma[i] = cont;
    cont = 0;
    }
    
     for (int i = 0; i < competidores; i++){
        if (soma[i] < menor){
            menor = soma[i];
            menorposic = i; 
        }
}

    printf("\n%d",(menorposic + 1));

    system("pause");
    return 0;
}
