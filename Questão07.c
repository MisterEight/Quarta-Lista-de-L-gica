#include <stdio.h>
#include <stdlib.h>


double calcula_s(int numero){
    double s;
    double fatorial;

    s = 1;

    for (int i = 2; i <= numero; i++)
    {
        fatorial = 1;
        for (int j = 1; j <= i; j++)
        {
            fatorial *= j;
        }

        s += 1 / fatorial;
    }

    return s;
    
}

int main() {
    int numero;

    system("chcp 65001");
    system("cls");

    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &numero);

    printf("\n%lf", calcula_s(numero));
}
