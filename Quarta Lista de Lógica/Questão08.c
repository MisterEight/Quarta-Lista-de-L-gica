#include <stdio.h>

float calcula_peso_ideal(char sexo, float altura) {
    float peso_ideal;

    switch (sexo)
    {
    case 'M':
        peso_ideal = 72.7 * altura - 58;
        break;
    case 'F':
        peso_ideal = 62.1 * altura - 44.7;
        break;
    default:
        break;
    }

    return peso_ideal;
}

int main(){

    float altura;
    char sexo;

    printf("\nDigite seu sexo (M/F): ");
    scanf("%c", &sexo);

    printf("\nDigite sua altura (Ex: 1.80): ");
    scanf("%f", &altura);

    printf("\nSeu peso ideal é: %.2lf\n", calcula_peso_ideal(sexo, altura));  
}