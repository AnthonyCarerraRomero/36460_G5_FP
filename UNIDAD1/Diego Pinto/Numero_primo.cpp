#include <stdio.h>
#include <stdbool.h>
int main()
{
	       int N, i;
    bool esPrimo;

    printf("Ingrese un numero entero mayor a 1: ");
    scanf("%d", &N);

    if (N > 1) {
        esPrimo = true;

        for (i = 2; i < N; i++) {
            if (N % i == 0) {
                esPrimo = false;
            }
        }

        if (esPrimo) {
            printf("Es un numero primo\n");
        } else {
            printf("No es un numero primo\n");
        }
    } else
        printf("El numero debe ser mayor que 1\n");


}
