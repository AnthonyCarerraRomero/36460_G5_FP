 /**Problema 1.15. Año bisiesto
 Nombre: Anthony Carrera
 Desarrolla un programa que lea un año y determine si es bisiesto. Un año es bisiesto si es divisible
entre 4, excepto los años divisibles entre 100, que solo lo son si también son divisibles entre 400.
Ejemplos: 2024 sí; 1900 no; 2000 sí.
 **/
#include <stdio.h>
int main()
{
    int anio;

    printf("Ingresa un año: ");
    scanf("%d", &anio);

    if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0)
        printf("%d es bisiesto\n", anio);
    else
        printf("%d no es bisiesto\n", anio);

    return 0;
}
