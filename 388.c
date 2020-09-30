#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int matriz[550][550], i, j, linha, coluna;
    int num, sum, aux, v[50],ind=0, k;
    
    scanf("%d%d", &linha, &coluna);
    
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
       for(i=0;i<linha;i++){
           sum=0;
            for(j=0;j<coluna;j++){
                 
                
                num = matriz[i][j];
                sum += num;
                
        }
        if(sum==0){
            
            ind=i+1;
           
            for(k=ind; k<linha; k++){
                for(j=0; j<coluna; j++){
                    
                    if(matriz[k][j]!=0){
                        printf("N");
                        return 0;
                    }
                }
            }
            
        }
        
    }
     for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
              if(matriz[i][j]!=0){
                 ind=j;
                 break;
            }            
        }
        for(k=i+1;k<linha;k++){
            for(j=0;j<=ind;j++){
                if(matriz[k][j]!=0){
                    printf("N");
                    return 0;
                }
            }
        }
     }    
      printf("S");  
    
    
return 0;
}