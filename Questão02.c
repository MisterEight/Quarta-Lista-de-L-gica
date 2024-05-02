#include <stdio.h>

int soma_entre_numeros(int numero1, int numero2){
    int soma = 0;
    int temp;

    if(numero1 > numero2) {
        temp = numero2;
        numero2 = numero1;
        numero2 = temp;
    }

    for (int i = numero1+1; i < numero2; i++){
        soma += i;
    }
    return soma;
}

int main() {
    int numero1, numero2;

    printf("Digite o primeiro número: \n");
    scanf("%d", &numero1);

    printf("Digite o segundo número: \n");
    scanf("%d", &numero2);

    printf("%d", soma_entre_numeros(numero1, numero2));
}