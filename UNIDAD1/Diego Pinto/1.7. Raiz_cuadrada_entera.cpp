#include <stdio.h>

int main()
{
	      int N, i, R;

    printf("Ingrese un numero entero positivo N: ");
    scanf("%d", &N);

    if (N >= 0) {
        i = 1;
        while ((i * i) <= N) {
            i = i + 1;
        }
        R = i - 1;
        printf("La raiz cuadrada entera por defecto es: %d\n", R);
    } else
        printf("El numero debe ser positivo\n");


}
