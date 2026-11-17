#include <stdio.h>
#define MAX 100

// Funcion para imprimir los valores del vector
void imprimirVector(int vec[], int tam) {//los parametros son los valores del vector y el tamaño que pasa por en main.
    printf("\nValores imprimidos del vector:\n");
    for (int i = 0; i < tam; i++) {
        printf("Posicion [%d]: %d\n", i, vec[i]);
    }
}

//Esta es la funcion para imprimir la matriz
void imprimirMatriz(int filas, int columnas, const float mat[][MAX]) {
    printf("\nValores de la Matriz\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%.2f\t", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int opc;

    printf ("Grupo #5\n");
    printf ("Programadores responsables: Anthony Carrera\n");


    do {
        //Este es nuestro menú de usuario
        printf("Menu\n");
        printf("1. Vector\n");
        printf("2. Matriz\n");
        printf("3. Salir\n");

        printf("Ingrese una opcion: ");
        scanf("%d", &opc);

        // Para usar 'case', la estructura obligatoria es 'switch'
        switch (opc) {
            case 1: { // Llaves obligatorias si declaras variables dentro del case
                int n, i;

                do {
                    printf("Cuantos datos ingresara: ");
                    scanf("%d", &n);

                    if (n <= 0) {
                        printf("Advertencia: La cantidad debe ser mayor a cero.\n");
                    }
                } while (n <= 0);

                int vector[n];



                for (i = 0; i < n; i++) {
                    // Usamos do-while para verificar si los valores son mayor a 0
                    do {
                        printf("Ingrese valor %d: ", i + 1);
                        scanf("%d", &vector[i]);

                        //esto es para mostrar un mensaje de error, si imgresa un valor negativo o cero
                        if (vector[i] <= 0) {
                            printf("Advertencia: El valor no puede ser negativo ni cero.\n");
                        }
                    } while (vector[i] <= 0);
                }

                imprimirVector(vector, n);//Llama a la función
                break; // Detiene el case 1 para no pasar al case 2
            }

            case 2: {
                int filas = 0, columnas = 0;

                // Validamos que estén entre 1 y MAX (100)
                do {
                    printf("Ingrese numero de filas (1 - %d): ", MAX);
                    scanf("%d", &filas);
                    printf("Ingrese numero de columnas (1 - %d): ", MAX);
                    scanf("%d", &columnas);

                    if (filas <= 0 || columnas <= 0 || filas > MAX || columnas > MAX) {
                        printf("Error: Filas y columnas deben estar entre 1 y %d.\n", MAX);
                    }
                } while (filas <= 0 || columnas <= 0 || filas > MAX || columnas > MAX);

                // Declaramos la matriz con el tamaño fijo MAX
                float matriz[MAX][MAX];

                // Recorremos solo hasta filas y columnas que pidió el usuario
                for (int i = 0; i < filas; i++) {
                    for (int j = 0; j < columnas; j++) {
                        do {
                            printf("Ingrese valor en posicion [%d][%d]: ", i + 1, j + 1);
                            scanf("%f", &matriz[i][j]);

                            if (matriz[i][j] <= 0) {
                                printf("Advertencia: El valor no puede ser negativo ni cero.\n");
                            }
                        } while (matriz[i][j] <= 0);
                    }
                }

                // Se llama exactamente igual que antes
                imprimirMatriz(filas, columnas, matriz);
                break;
            }

            case 3:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opcion no valida\n");
                break;
        }

    } while (opc != 3);

    return 0;
}




