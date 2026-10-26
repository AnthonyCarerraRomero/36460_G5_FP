#include <stdio.h>

int main()
{
        int secreto = 42;
    int intento, intentos = 0;

    do {
        printf("Adivina el numero (entre 1 y 100): ");
        scanf("%d", &intento);
        intentos = intentos + 1;

        if (intento < secreto) {
            printf("Mas alto\n");
        } else {
            if (intento > secreto) {
                printf("Mas bajo\n");
            } else {
                printf("¡Acertaste!\n");
            }
        }
    } while (intento != secreto);

    printf("Numero total de intentos: %d\n", intentos);
}
