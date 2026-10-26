#include <stdio.h>

int main()
{
        int n, d, suma;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &n);

    if (n > 0) {
        suma = 0;
        for (d = 1; d <= n - 1; d++) {
            if (n % d == 0) {
                suma = suma + d;
            }
        }

        if (suma == n) {
            printf("%d es un numero perfecto\n", n);
        } else {
            printf("%d no es un numero perfecto\n", n);
        }
    } else
        printf("El numero debe ser entero positivo\n");
}
