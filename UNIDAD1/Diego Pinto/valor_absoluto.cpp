#include <stdio.h>

#include <math.h>

int main()
{
	float n1,n2;
	printf("Ingrese numero 1: ");
	scanf("%f",&n1);
	n2= fabs(n1*n1*n1);
    printf("El resultado final es: %.2f\n", n2);

}

