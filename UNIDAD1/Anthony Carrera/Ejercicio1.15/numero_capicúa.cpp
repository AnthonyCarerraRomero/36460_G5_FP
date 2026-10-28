#include <stdio.h>
int main()
{
    int n, copia, digito, invertido = 0;

    printf("Ingresa un entero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("El número debe ser positivo\n");
        return 0;
    }

    copia = n;
    while (copia > 0) {
        digito = copia % 10;
        invertido = invertido * 10 + digito;
        copia = copia / 10;
    }

    if (invertido == n)
        printf("%d es capicúa\n", n);
    else
        printf("%d no es capicúa\n", n);

    return 0;
}
