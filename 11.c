#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

# lanso a braba, boi

int main() {

    int n, m;
   
    scanf("%d %d", &n, &m);

    while(n!=0 && m!=0){

            int i, j, a;
 char s1[1000][1000], s2[1000][1000], aux[100], t[1000];

    for(i=0; i<n; i++){
        scanf(" %s", s1[i]);
        scanf(" -> %s", s2[i]);
    }

    int aux2=0, auxt, aux3;

    for(j=0; j<m; j++){
        scanf(" %[^\n]", t);
        auxt = strlen(t);


        for(i=0; i<n; i++){
            
            aux2=strlen(s1[i]);
            aux3=strlen(s2[i]);
           
           
            for(a=0; a<=auxt-aux2+1; a++){
             
              if(strncmp(t+a, s1[i], aux2)==0){
                  
                    strcpy(aux, t+ a+ aux2);
                    strcpy(t+a, s2[i]);
                    strcpy(t+a+ aux3, aux);
              }
            }
        }
        printf("%s\n", t);
    }
    scanf("%d %d", &n, &m);
    }
  
  return 0;
}
