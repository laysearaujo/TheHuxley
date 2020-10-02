#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int tamanho;
    scanf("%d",&tamanho);
    int matriz[tamanho][tamanho];

    for (int i = 0 ; i < tamanho ; i++) {
        for (int j = 0 ; j < tamanho ; j++){
            scanf("%d",&matriz[j][i]);
            if (matriz[j][i] < 0){
                matriz[j][i] = matriz[j][i] * 2;
            }
    }
    }
    for (int i = 0 ; i < tamanho ; i++) {
        for (int j = 0 ; j < tamanho  ; j++)
            if (j == 0){
                printf("%d", matriz[i][j]);
            }else{
                printf(" %d", matriz[i][j]);
    
            }
        printf("\n");
    }


    system("pause");
    return 0;
}
