#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int teste, i, n, a, aux, x, tam, y, j;
    
    
    scanf("%d", &teste);
    
    for(a=0; a<teste; a++){
        
        int fsi[1050][130]={}, fing[130]={};
        char si[1000][50], ing[10000];
        
        scanf("%d", &n);
        
    for(i=0;i<n;i++){
        scanf(" %s", &si[i]);
    }
    
    scanf(" %s", ing);
    
    for(i=0;i<n;i++){
        aux=strlen(si[i]);
            for(j=0;j<aux;j++){
                x=si[i][j];
                fsi[i][x]++;
            }
    }
     

    tam=strlen(ing);

    for(i=0; i<tam; i++){
        y=ing[i];
        fing[y]++;
     } 
     
   for(i=0;i<n;i++){

    int aux2, elemento, freq1, freq2, min=10000, menor=0, ele;
        
        aux2=strlen(si[i]);
            for(j=0; j<aux2;j++){
                
                elemento=si[i][j];
                freq1=fsi[i][elemento];
                freq2=fing[elemento];
                
                menor=freq2/freq1;
                
                if(menor<min){
                    min=menor;
                }
                
            } 
            
        for(j=0; j<aux2; j++){
            
            ele=si[i][j];
            fing[ele]=fing[ele]-min;
        } 
            printf("%d\n", min);
        
    }
    
    printf("\n");
    
        
    }
    
	return 0;
}