#include <stdio.h>

float compara_valor(float valor_antigo, float valor_novo) {
    float percentual;

    percentual = (valor_novo - valor_antigo) / valor_antigo;

    return percentual;

}

int main() {
    float valor_novo, valor_antigo;

    printf("\nDigite o valor antigo do produto: ");
    scanf("%f", &valor_antigo);

    printf("\nDigite o valor novo do produto: ");
    scanf("%f", &valor_novo);

    printf("\nO valor aumentou em: %.2f%%", 100 * compara_valor(valor_antigo, valor_novo));

}