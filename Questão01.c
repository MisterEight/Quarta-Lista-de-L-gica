#include <stdio.h>

int positivo_negativo(float numero){
    if(numero > 0){
        return 1;
    } else {
        return 0;
    }
}

int main() {
    float numero;

    printf("Digite um número: \n");
    scanf("%f", &numero);

    printf("%d", positivo_negativo(numero));


    
}