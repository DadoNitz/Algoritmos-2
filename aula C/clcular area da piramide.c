#include <stdio.h>

int main() {
    int altura, base;
    
    // Solicitar altura da piramide
    printf("Digite a altura da piramide: ");
    scanf("%i", &altura);
    
    // Solicitar altura da base
    printf("Digite a base da piramide em metros: ");
    scanf("%i", &base);

    // Calcula a area
    float area = (altura * base) / 2; 

    // Exibe o resultado
    printf("A area da piramide e: %.2f metros quadrados", area );

    return 0;
}
