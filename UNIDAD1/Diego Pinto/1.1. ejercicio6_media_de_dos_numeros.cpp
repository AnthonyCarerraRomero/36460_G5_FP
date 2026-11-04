#include <stdio.h>

int main()
{
	float n1,n2,n3;
	int i;
	i=2;
	printf("Ingrese numero 1: ");
	scanf("%f",&n1);
	printf("Ingrese el numero 2: ");
	scanf("%f",&n2);
	n3= (n1+n2)/i;
    printf("El resultado final es: %.2f\n", n3);

}
