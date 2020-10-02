#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void distancia(int x, int y){
    float hogs,kakariko,solitude;
    hogs = ((34-x)*(34-x))+((220-y)*(220-y));
    kakariko = ((0-x)*(0-x))+((0-y)*(0-y));
    solitude = ((140-x)*(140-x))+((456-y)*(456-y));

    hogs = sqrt(hogs);
    kakariko = sqrt(kakariko);
    solitude = sqrt(solitude);
    
    printf("Distancia para Hogsmeade: %.2lf\n",hogs);
    printf("Distancia para Kakariko: %.2lf\n",kakariko);
    printf("Distancia para Solitude: %.2lf\n",solitude);
    return 0;
}

int main(void){
    int x,y;
    scanf("%d %d",&x,&y);
    distancia(x,y);
    
    return 0;
}
