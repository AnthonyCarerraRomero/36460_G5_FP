/**
Integrantes: Anthony Carrera; Diego Pinto; Diego Cumbal
Reto 1 · La tienda del aventurero
Enunciado
Una espada cuesta 50 monedas. Lee las monedas que tiene el jugador. Si le alcanzan, muestra "Compra exitosa: obtienes la espada"
 y las monedas que le quedan; si no, muestra cuántas monedas le faltan.**/

#include <stdio.h>

int main()
{
    int monedas, precio = 50, faltan = 0, sobra = 0;

    printf("Ingrese el numero de monedas: ");
    scanf("%d", &monedas);

    switch (monedas)
    {
        case 80:
            printf("Compra exitosa\n");
            printf("Restante 30\n");
            break;
        case 50:
            printf("Compra exitosa\n");
            printf("Restante 0\n");
            break;
        default:
            if (monedas < 50)
            {
                faltan = precio - monedas;
                printf("Te hacen falta estas monedas: %d\n", faltan);
            }
            else
            {
                sobra = monedas - precio;
                printf("Compraste la espada\n");
                printf("Te sobran: %d\n", sobra);
            }
    }

    return 0;
}
