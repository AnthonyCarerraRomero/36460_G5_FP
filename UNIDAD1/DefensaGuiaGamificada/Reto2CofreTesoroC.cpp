/**
Integrantes: Anthony Carrera; Diego Pinto; Diego Cumbal
Reto 2 · El cofre del tesoro
Enunciado
Lee el valor de cada gema que abre el jugador y repite hasta que ingrese 0.
 Al terminar muestra cuántas gemas abrió y la suma de sus valores.**/

#include <stdio.h>

int main()
{
    int gema, suma = 0, cant = 0;

    printf("Ingrese el valor de la gema (0 para finalizar): ");
    scanf("%d", &gema);

    while (gema != 0)
    {
        suma = suma + gema;
        cant = cant + 1;
        printf("Ingrese el valor de la gema (0 para finalizar): ");
        scanf("%d", &gema);
    }

    printf("Gemas: %d\n", cant);
    printf("Total: %d\n", suma);

    return 0;
}
