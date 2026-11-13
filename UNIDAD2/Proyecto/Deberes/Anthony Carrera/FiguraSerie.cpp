
#include <stdio.h>

int main(){

    // Declaración de variables enteras utilizadas en el programa.
    int opcion, n, i, f, c, j;

    // Declaración de variables de tipo flotante para los cálculos.
    float resultado, potencia;


    // Ciclo principal del menú. Se repite hasta seleccionar la opción 3.
    do{

        // Presentación de las opciones disponibles.
        printf("Menú\n");

        printf("1. Figura\n");

        printf("2. Serie\n");

        printf("3. Salir\n");


        // Solicita al usuario que seleccione una opción.
        printf("Escoja una opción: ");

        // Almacena la opción ingresada por el usuario.
        scanf("%d", &opcion);


        // Evalúa la opción seleccionada por el usuario.
        switch(opcion){

        case 1:

            // Solicita el número de filas para dibujar la figura.
            printf("Ingrese el número filas: ");

            scanf("%d", &n);


            // Ciclo externo encargado de recorrer las filas.
            for(f=1; f<=n; f++){

                // Ciclo interno encargado de recorrer las columnas.
                for(c=1; c<=n; c++){

                    // Comprueba si la posición corresponde al borde de la figura.
                    if(f==1 || f==n || c==1 || c==n){

                        // Imprime el número 1 cuando se encuentra en el borde.
                        printf(" 1 ");

                    }else{

                        // Imprime espacios en las posiciones interiores.
                        printf("   ");

                    }

                }

                // Salta a la siguiente línea al finalizar cada fila.
                printf("\n");

            }

            // Finaliza la ejecución del caso 1.
            break;


        case 2:

            // Solicita la cantidad de términos de la serie.
            printf("Ingrese numero de terminos: ");

            scanf("%d", &n);


            // Inicializa el acumulador del resultado en cero.
            resultado = 0;

            // Recorre los términos de la serie desde 1 hasta n.
            for (i = 1; i <= n; i++)
            {

                // Inicializa la variable potencia en uno.
                potencia = 1;

                // Calcula la potencia de i elevado a i mediante multiplicaciones sucesivas.
                for (j = 1; j <= i; j++)
                {

                    // Multiplica la potencia acumulada por el valor de i.
                    potencia = potencia * i;

                }

                // Agrega el signo de suma antes de cada término, excepto el primero.
                if (i > 1)

                    printf(" + ");

                // Muestra el término correspondiente de la serie.
                printf("%d.00^%d", i, i);

                // Acumula el valor de la potencia en el resultado final.
                resultado = resultado + potencia;

            }

            // Muestra el resultado total de la serie.
            printf("\nEl resultado es %f\n", resultado);

            // Finaliza la ejecución del caso 2.
            break;


        case 3:

            // Muestra el mensaje de finalización del programa.
            printf("Fin del programa");

            // Finaliza la ejecución del caso 3.
            break;


        default:

            // Informa al usuario cuando selecciona una opción no válida.
            printf("Opción no valida\n");


        }


    // Repite el menú mientras la opción seleccionada sea diferente de 3.
    }while(opcion!=3);


    // Indica que el programa terminó correctamente.
    return 0;


}

