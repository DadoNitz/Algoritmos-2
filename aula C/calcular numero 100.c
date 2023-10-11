#include <stdio.h>
#include <stdlib.h>


int main () { 
    
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Número inválido! Digite um número maior que 0.\n");
    } else if (numero < 100) {
        printf("O número é menor que 100.\n");
    } else if (numero > 100) {
        printf("O número é maior que 100.\n");
    } else {
        printf("O número é igual a 100.\n");
    }

    return 0;
}
