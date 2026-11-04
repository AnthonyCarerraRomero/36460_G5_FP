#include <stdio.h>

int main()
{
	    int n1, dias, minutos, segundos, horas, aux;

    printf("Ingrese numero 1: ");
    scanf("%d",&n1);
    dias=n1/86400;
    aux=n1%86400;
    horas=aux/3600;
    aux=aux%3600;
    minutos=aux/60;
    segundos=aux%60;
    printf("%d segundos equivalen a %d dias, %dhoras, %d minutos y %d segundos\n",n1,dias,horas,minutos,segundos);


}
