#include <stdio.h>

int main()
{
        int n, aux, binario, resto, base;

    printf("Ingrese un entero positivo base 10: ");
    scanf("%d", &n);

    if (n >= 0) {
        aux = n;
        binario = 0;
        base = 1;

        if (n == 0) {
            binario = 0;
        } else {
            while (aux > 0) {
                resto = aux % 2;
                binario = binario + (resto * base);
                base = base * 10;
                aux = aux / 2;
            }
        }

        printf("La representacion en binario es: %d\n", binario);
    } else
        printf("El numero debe ser mayor o igual que 0\n");
}
