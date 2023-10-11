#include <stdio.h>
#include <stdlib.h>

int main() {

int veta[10];
int numero;

    numero = 0;
    while( numero <10 ) { 

        printf("Insira o numero do vetor %d\n", numero + 1);
        scanf("%d", &veta[numero]);
        numero++;
    }

    numero = 0;
    while ( numero <10 ) { 
        if (veta[numero] % 2 == 0) {
        printf("Numero pares dentro do array: %d\n", veta[numero]);
        }
        numero++;
    }     


   return 0;
}