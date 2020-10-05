#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void maior(int x, int y){
    float carlos,beto,rafael;
    carlos = (-100*x)+ ((y*y)*y);
    beto = (2*(x*x)) + ((5*y)*(5*y));
    rafael = ((3*x)*(3*x)) + (y*y);

    if (carlos > beto && carlos > rafael){
        printf("Carlos ganhou\n");
    }
    if ( beto > carlos && beto > rafael){
        printf("Beto ganhou\n");
    }
    if(rafael > carlos && rafael > beto){
        printf("Rafael ganhou\n");

    }
    
    return 0;
}

int main(void){
    int x,y,cont = 0,rot = 0;
    scanf("%d",&cont);
    while (rot < cont){
        scanf("%d %d",&x,&y);
        maior(x,y);   
        rot++;
    }
    return 0;
}
