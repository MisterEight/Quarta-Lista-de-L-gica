#include <stdio.h>


int verifica_divisivel(int numero_a, int numero_b, int numero_c) {
    int temp;
    int soma = 0;

    if(numero_b > numero_c) {
        temp = numero_b;
        numero_b = numero_c;
        numero_c = temp;
    }

    for (int i = numero_b; i <= numero_c; i++){
        if(i % numero_a == 0) {
            printf("\n%d", i);
            soma += i;
        }
    }
    return soma;
}

int main() {
    int numero_a, numero_b, numero_c = 0;

    printf("\nDigite o número A: ");
    scanf("%d", &numero_a);

    if (numero_a < 1){
        printf("O número a precisa ser maior que 1!");
        return 0;
    }

    printf("\nDigite o número B: ");
    scanf("%d", &numero_b);

    printf("\nDigite o número C: ");
    scanf("%d", &numero_c);

    printf("\n%d", verifica_divisivel(numero_a, numero_b, numero_c));


}