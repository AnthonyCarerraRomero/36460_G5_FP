#include <stdio.h>

int main()
{
        int anio;

    printf("Ingrese el valor: ");
    scanf("%d", &anio);

    if (anio > 0) {
        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
            printf("si es bisiesto\n");
        } else {
            printf("no es bisiesto\n");
        }
    } else
        printf("El ano debe ser un numero entero positivo\n");
}
