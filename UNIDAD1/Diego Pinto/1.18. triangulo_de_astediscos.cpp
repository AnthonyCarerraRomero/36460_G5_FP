#include <stdio.h>

int main()
{
        int n, mayor = 0, segundo = 0, contador = 0;

    printf("Ingrese un numero entero positivo (0 para terminar): ");
    scanf("%d", &n);

    while (n != 0) {
        if (n > 0) {
            contador = contador + 1;

            if (contador == 1) {
                mayor = n;
            } else {
                if (n > mayor) {
                    segundo = mayor;
                    mayor = n;
                } else {
                    if (n > segundo && n != mayor) {
                        segundo = n;
                    }
                }
            }
        } else {
            printf("Ingrese solo numeros positivos\n");
        }

        printf("Ingrese el siguiente numero (0 para terminar): ");
        scanf("%d", &n);
    }

    if (contador >= 2) {
        printf("Mayor = %d\n", mayor);
        printf("Segundo mayor = %d\n", segundo);
    } else
        printf("Hay menos de dos valores ingresados\n");
}
