#include <stdio.h>
#include <math.h>

float calcula_sequencia(int numero) {
    float sequencia = 0;
    for (float i = 1; i <= numero; i++)
    { 
        sequencia += (i*i + 1) / (i + 3);
    }

    return sequencia;
}


int main() {

    int numero;

    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &numero);

    printf("O valor da sequência é: %lf", calcula_sequencia(numero));

}