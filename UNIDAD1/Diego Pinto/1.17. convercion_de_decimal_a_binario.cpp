#include <stdio.h>

int main()
{
        int n, i, j;

    printf("Ingrese un numero entero n >= 1: ");
    scanf("%d", &n);

    if (n >= 1) {
        for (i = 1; i <= n; i++) {

            for (j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }
    } else
        printf("El numero de filas deben ser mayor o igual a 1\n");
}
