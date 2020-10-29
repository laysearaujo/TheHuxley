#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define tam 40

char leString(char string[tam]){
    char caract;
    int x=tam;
    int contador = 0;
    printf("Digite uma frase de ate %d letras:\n", x);
    scanf("%[^\n]s", string);
    printf("Digite um caracter que voce deseja contar na frase: ");
    scanf(" %c", &caract);
    return caract;
}

int comparaString(char string[tam],char caract){
    int i,contador = 0;
    for(i=0;i<tam-1;i++){
        if(string[i] == caract){
            contador++;
        }
    }
    return contador;
}



int main(){
    char string[tam];
    int freq;
    char caract;
    caract = leString(string);
    freq = comparaString(string,caract);
    printf("Frequencia de %d", freq);
    return 0;
}