#include <stdio.h>

int main()
{
        int a, b, temp;

    printf("Ingrese el primer numero entero positivo: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero entero positivo: ");
    scanf("%d", &b);

    if (a > 0 && b > 0) {
        while (b > 0) {
            temp = b;
            b = a % b;
            a = temp;
        }
        printf("El maximo comun divisor es: %d\n", a);
    } else
        printf("Ambos numeros deben ser enteros positivos\n");
}
