#include <stdio.h>
#include <stdlib.h>

int main() {

    int veta[5] = {};
    int vetb[5] = {100, 4, 500, 900, 2};
    float var, varMedia;
    printf("Trabalhando com vetores \n");

    printf("Primeiro valor VetA: %d\n", veta[0]);
    printf("Ultimo Valor VetA: %d\n", veta[4]);

    printf("Primeiro valor VetB: %d\n", vetb[0]);
    printf("Ultimo Valor VetB: %d\n", vetb[4]);

    vetb[0] = 600;
    printf("Primeiro valor VetB: %d\n", vetb[0]);

    for(int i=0; i<5;i++) {
        printf("INFORME O %d valor do vetor A\n", i);
        scanf("%d", &veta[i]);
    }

    printf("Apresentando os valores do vetor A\n");

    for(int i=0; i<5;i++){

        var = ( veta[i] + var );

        printf("Valor do vetor A: %d - Indice: %d", veta[i],i );
    }

        varMedia = var / 5;
        printf (" Media %f", varMedia);
        return 0;
} 