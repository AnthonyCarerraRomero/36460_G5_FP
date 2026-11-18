#include <stdio.h>

// Prototipos de las funciones
int mostrarMenu();
void dibujarFigura(int n);
float calcularPotencia(int base, int exponente);
void calcularSerie(int n);

int main() {
    int opcion, n;

    // Ciclo principal del menú. Se repite hasta seleccionar la opción 3.
    do {
        printf("Programador responsable: Anthony Carrera")
        opcion = mostrarMenu();

        switch (opcion) {
            case 1:
                printf("Ingrese el numero filas: ");
                scanf("%d", &n);
                dibujarFigura(n);
                break;

            case 2:
                printf("Ingrese numero de terminos: ");
                scanf("%d", &n);
                calcularSerie(n);
                break;

            case 3:
                printf("Fin del programa\n");
                break;

            default:
                printf("Opcion no valida\n");
        }
    } while (opcion != 3);

    return 0;
}

// Función para mostrar el menú y retornar la opción elegida
int mostrarMenu() {
    int op;
    printf("Menu\n");
    printf("1. Figura\n");
    printf("2. Serie\n");
    printf("3. Salir\n");
    printf("Escoja una opcion: ");
    scanf("%d", &op);
    return op;
}

// Función para dibujar el cuadrado hueco de tamaño n x n
void dibujarFigura(int n) {
    int f, c;
    for (f = 1; f <= n; f++) {
        for (c = 1; c <= n; c++) {
            if (f == 1 || f == n || c == 1 || c == n) {
                printf(" 1 ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
}

// Función auxiliar para calcular base^exponente
float calcularPotencia(int base, int exponente) {
    float potencia = 1;
    int j;
    for (j = 1; j <= exponente; j++) {
        potencia = potencia * base;
    }
    return potencia;
}

// Función para mostrar y calcular la suma de la serie
void calcularSerie(int n) {
    float resultado = 0, potencia;
    int i;

    for (i = 1; i <= n; i++) {
        potencia = calcularPotencia(i, i);

        if (i > 1) {
            printf(" + ");
        }
        printf("%d.00^%d", i, i);
        resultado = resultado + potencia;
    }
    printf("\nEl resultado es %f\n", resultado);
}
