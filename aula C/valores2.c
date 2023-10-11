#include <stdio.h>
#include <stdlib.h>

int main() {

    int veta[20] = {};
    int var;
    int contador = 0;

    for(int i=0; i<20;i++){
        printf("Informe o valor: \n");
        scanf("%d", &veta[i]);
        if (veta[i] == 5){
            contador++;
        }

        printf("O numero 5 apareceu %i ", contador);
    
    }   
        return 0;
} 