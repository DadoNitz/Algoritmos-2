#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;

    printf("Digite a nota da primeira avaliacao: ");
    scanf("%f", &nota1);

    printf("Digite a nota da segunda avaliacao: ");
    scanf("%f", &nota2);

    printf("Digite a nota da terceira avaliacao: ");
    scanf("%f", &nota3);

    printf("Digite a nota da quarta avaliacao: ");
    scanf("%f", &nota4);

    // Calcula a média
    media = (nota1 + nota2 + nota3 + nota4) / 4.0;

    printf("Media Final: %.2f\n", media);

    if (media >= 7.0) {
        printf("Aluno Aprovado!\n");
    } else {
        printf("Aluno Reprovado.\n");
    }

    return 0;
}
