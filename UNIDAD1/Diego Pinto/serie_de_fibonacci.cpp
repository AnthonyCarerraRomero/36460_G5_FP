#include <stdio.h>

int main()
{
        int n, aux, suma, digito;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);

    if (n > 0) {
        suma = 0;
        aux = n;

        while (aux > 0) {
            digito = aux % 10;
            suma = suma + digito;
            aux = aux / 10;
        }

        printf("La suma de los digitos de %d es: %d\n", n, suma);
    } else {
        printf("El numero debe ser entero positivo\n");
    }
}
