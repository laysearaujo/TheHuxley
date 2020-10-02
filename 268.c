#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct passageiro{
    int passe;
    char data[100];
    char saida[100];
    char destino[100];
    char horario[100];
    int poltrona;
    int idade; 
    char nome[30];
}registros[44];

int main(){

    float media;
    int cont_passageiros = 0, idades=0;

    while('True'){ 
  
        scanf(" %d", &registros[cont_passageiros].passe);

        if(registros[cont_passageiros].passe<0 || cont_passageiros>44)break;
    
            scanf(" %[^\n]s\n",registros[cont_passageiros].data);
            scanf(" %[^\n]s\n",registros[cont_passageiros].saida);
            scanf(" %[^\n]s\n",registros[cont_passageiros].destino);
            scanf(" %[^\n]s\n",registros[cont_passageiros].horario );
            scanf(" %d", &registros[cont_passageiros].poltrona);
            scanf(" %d", &registros[cont_passageiros].idade);
            scanf(" %[^\n]s\n", registros[cont_passageiros].nome);
    
            idades = idades + registros[cont_passageiros].idade;
    
            cont_passageiros++;
        
    }

media = (idades/cont_passageiros);


for(int i = 0; i < cont_passageiros; i++){
  if((registros[i].idade > media) && (registros[i].poltrona%2 == 0)){
    printf("%s\n", registros[i].nome);
  }
}

system("pause");
return 0;
}
