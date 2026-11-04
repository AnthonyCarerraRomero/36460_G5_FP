#include <stdio.h>

int main()
{
	float altura, suma = 0, media, maximo, minimo;
    int contador = 0;

    printf("Ingrese la altura: ");
    scanf("%f", &altura);

    if (altura >= 0) {
        maximo = altura;
        minimo = altura;
    }

    while (altura >= 0) {
        suma = suma + altura;
        contador = contador + 1;

        if (altura > maximo) {
            maximo = altura;
        }
        if (altura < minimo) {
            minimo = altura;
        }

        printf("Ingrese la altura: ");
        scanf("%f", &altura);
    }

    if (contador > 0) {
        media = suma / contador;
        printf("La media de las alturas es: %.2f\n", media);
        printf("La altura maxima es: %.2f\n", maximo);
        printf("La altura minima es: %.2f\n", minimo);
    } else
        printf("No se ingresaron alturas validas\n");


}
