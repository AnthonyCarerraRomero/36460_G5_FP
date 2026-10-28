 /**Problema 1.15. Año bisiesto
 
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
