#include <stdio.h>

// Muestra los valores del vector uno al lado del otro
void imprimirVector(int vector[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\t", vector[i]);
    }
    printf("\n");
}

// Muestra la matriz fila por fila.
// Recibe la dirección del primer elemento y calcula la posición con i * cols + j
void imprimirMatriz(int filas, int cols, int *matriz)
{
    int i, j;
    for (i = 0; i < filas; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d\t", matriz[i * cols + j]);
        }
        printf("\n");
    }
}

int main()
{
    printf("Programa realizado por: Anthony Carrera");

    int opc;

    printf("Menu: \n");
    printf("1. Vector\n");
    printf("2. Matriz\n");
    printf("3. Salir\n");

    do
    {
        printf("Escoja una opcion: \n");
        scanf("%d", &opc);

        if (opc<=0 || opc >3)
        {
            printf("Advertencia: Solo valores entre (1-3)\n");
        }

        switch(opc)
        {

        case 1:
        {
            int n, i;

            // Pedimos el tamaño hasta que sea mayor que 0
            do
            {
                printf("Tamaño del vector: ");
                scanf("%d", &n);
                if (n<=0)
                {
                    printf("Advertencia: el tamaño del vector debe ser n>0\n");
                }
            }
            while(n<=0);

            int vector1[n];

            // Llenamos el vector y no dejamos pasar valores negativos ni el 0
            for (i=0; i<n; i++)
            {
                do
                {
                    printf("Ingrese valor %d \n", i+1);
                    scanf("%d", &vector1[i]);

                    if (vector1[i]<=0)
                    {
                        printf("Advertencia: solo valores positivos\n");
                    }

                }
                while(vector1[i]<=0);
            }

            printf("Vector: \n");
            imprimirVector(vector1, n);

            break;
        }

        case 2:
        {
            int filas, columnas;

            // Pedimos filas y columnas hasta que las dos sean mayores que 0
            do
            {
                printf("Numero de filas: ");
                scanf("%d", &filas);

                printf("Numero de columnas: ");
                scanf("%d", &columnas);

                if (filas<=0 || columnas<=0)
                {
                    printf("Advertencia: las filas y columnas deben ser mayores que 0 \n");
                }
            }
            while(filas<=0 || columnas<=0);

            int matriz[filas][columnas];

            // Recorremos la matriz para llenarla, fila por fila
            for(int f=0; f<filas; f++)
            {
                for(int c=0; c<columnas; c++)
                {
                    do
                    {
                        printf("Ingrese valor [%d] [%d]\n", f+1, c+1);
                        scanf("%d", &matriz[f][c]);

                        if (matriz[f][c]<0)
                        {
                            printf("Advertencia: solo valores positivos\n");
                        }
                    }
                    while(matriz[f][c]<0);
                }
            }

            printf("matriz: \n");

            // Le pasamos a la función la dirección del primer elemento
            imprimirMatriz(filas, columnas, &matriz[0][0]);

            break;
        }
        case 3:
            printf("\nSaliendo...\n");
            break;

        default:
            printf("\nError de formato\n");

        }
    }
    while(opc!=3);




}
