#include <stdio.h>

int main()
{
	int n1,n2;

	printf("Ingrese numero 1: ");
	scanf("%d",&n1);
	printf("Ingrese el numero 2: ");
	scanf("%d",&n2);
	if (n2==0)
        printf("No es posible dividir entre cero\n");
        else
        if(n1%n2==0)
            printf("%d es divisible por %d\n",n1,n2);
        else
            printf("%d no es divisible por %d\n",n1,n2);


}
