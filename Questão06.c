#include <stdio.h>
#include <stdlib.h>

double calcula_media(float nota1, float nota2, float nota3, char letra){
    double media;

    switch (letra)
    {
    case 'A':
        media = (nota1+nota2+nota3) / 3;
        break;
    case 'P':
        media = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 11;
        break;

    default:
        break;
    }
    return media;
}

int main() {
    float nota1, nota2, nota3;
    char letra;
    
    system("chcp 65001");
    system("cls");

    
    printf("\nDigite a letra da média(A/P): ");
    scanf("%c", &letra);

    printf("\nDigite a nota número 1: ");
    scanf("%f", &nota1);

    printf("\nDigite a nota número 2: ");
    scanf("%f", &nota2);

    printf("\nDigite a nota número 3: ");
    scanf("%f", &nota3);

    printf("\nA média foi: %.2lf", calcula_media(nota1, nota2, nota3, letra));

}