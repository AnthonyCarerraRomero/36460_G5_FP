#include <stdio.h>

int main()
{
        int n, a, b, siguiente, i;

    printf("Ingrese un numero entero n >= 1: ");
    scanf("%d", &n);

    if (n >= 1) {
        a = 0;
        b = 1;
        printf("Serie de Fibonacci:\n");

        for (i = 1; i <= n; i++) {
            if (i == 1) {
                printf("%d ", a);
            } else if (i == 2) {
                printf("%d ", b);
            } else {
                siguiente = a + b;
                a = b;
                b = siguiente;
                printf("%d ", siguiente);
            }
        }
        printf("\n");
    } else {
        printf("Error: El numero debe ser mayor o igual que 1\n");
    }
}
