#include <stdio.h>

int main()
{
        int num1, num2, inicio, fin;
    int i, j, esPrimo;
    int encontrado = 0;
    printf("Ingrese el primer numero entero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero entero: ");
    scanf("%d", &num2);
    if (num1 > num2) {
        inicio = num2;
        fin = num1;
    } else {
        inicio = num1;
        fin = num2;
    }
    printf("\nNumeros primos comprendidos entre %d y %d:\n", inicio, fin);
    for (i = inicio; i <= fin; i++) {
        if (i <= 1) {
            continue;
        }
        esPrimo = 1;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                esPrimo = 0;
                break;
            }
        }
        if (esPrimo == 1) {
            printf("%d ", i);
            encontrado = 1;
        }
    }
    if (!encontrado) {
        printf("No se encontraron numeros primos en este rango.");
    }
}
