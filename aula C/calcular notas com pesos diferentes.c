#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    float media;

    // Solicitar nota de peso 2
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    // Solicitar a nota de peso 3
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    // Solicitar nota de peso 5
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Calcular a media das notas.
    media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;

    // Retorna a media para o usuario
    printf("A nota 1 foi: %.2f\n, A nota 2 foi: %.2f\n, A nota 3 foi: %.2f\n,  A média final é: %.2f\n", nota1, nota2, nota3, media);

    return 0;
}