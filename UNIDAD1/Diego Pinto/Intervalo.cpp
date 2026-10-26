#include <stdio.h>

int main()
{
	float n1;

	printf("Ingrese numero 1: ");
	scanf("%f",&n1);

	if (n1>=0 && n1<=10)
        printf("El numero si esta en el intervalo\n");
        else
            printf("El numero no esta en el intervalo\n");



}
