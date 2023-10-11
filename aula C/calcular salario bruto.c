#include <stdio.h>

int main() {
    float salarioBruto, salarioLiquido;
    const float descontoPrevidencia = 0.10; // 10% de desconto para a previdência

    // Solicitar o salário bruto ao usuário
    printf("Digite o salario bruto do funcionario: ");
    scanf("%f", &salarioBruto);

    // Calcula o valor do desconto
    float valorDesconto = salarioBruto * descontoPrevidencia;

    // Calcula o salário líquido
    salarioLiquido = salarioBruto - valorDesconto;

    // Exibe o resultado
    printf("Salario Liquido: %.2f\n", salarioLiquido);

    return 0;
}
