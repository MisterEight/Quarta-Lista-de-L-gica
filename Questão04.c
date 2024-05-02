#include <stdio.h>

void converte_segundos(int segundos_totais){
    int horas, minutos, segundos, resto;

    horas = segundos_totais / 3600;
    resto = segundos_totais % 3600;
    minutos = resto / 60;
    segundos = resto % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);
}


int main() {
    int segundos;

    printf("Digite uma quantidade de segundos: ");
    scanf("%d", &segundos);

    converte_segundos(segundos);

}