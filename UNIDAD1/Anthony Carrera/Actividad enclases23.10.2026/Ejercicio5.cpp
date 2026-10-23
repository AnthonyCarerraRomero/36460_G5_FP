#include <stdio.h>
int main(){

    int c, dias, horas, minutos, segundos, resto;

    printf("Ingrese el número de segundos (c): ");
    scanf("%d", &c);

    dias = c / (24 * 60 * 60);
    resto = c % (24 * 60 * 60);
    horas = resto / (60 * 60);
    resto = resto % (60 * 60);
    minutos = resto / 60;
    segundos = resto % 60;

    printf("Conversión de unidades:\n");
    printf("Días: %d\n", dias);
    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos);

    return 0;
}
