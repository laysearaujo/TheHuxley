#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() { 
    int v[1000][1000], p , l, sum=0, k=0, i, j, num;
    
    scanf("%d %d", &p, &l);
    
    for(i=0; i<l; i++){
        for(j=0; j<p; j++){
            scanf("%d", &v[i][j]);
   
   }
    }
  
        
        for(i=0; i<p; i++){
            for(j=0; j<l; j++){
      num = v[j][i];
      sum += num;
            
    
        
    } k++;
    
        printf("Princesa %d: %d voto(s)\n", k, sum);
            sum=0;
      }
    
	return 0;
}