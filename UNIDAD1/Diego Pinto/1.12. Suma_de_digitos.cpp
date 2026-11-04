#include <stdio.h>

int main()
{
        int n, aux, invertido, digito;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);

    if (n > 0) {
        aux = n;
        invertido = 0;

        while (aux > 0) {
            digito = aux % 10;
            invertido = (invertido * 10) + digito;
            aux = aux / 10;
        }

        if (n == invertido) {
            printf("%d es capicua\n", n);
        } else {
            printf("%d no es capicua\n", n);
        }
    } else
        printf("El numero debe ser entero positivo\n");
}
