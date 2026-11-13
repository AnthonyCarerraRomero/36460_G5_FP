#include <stdio.h>
#include <math.h>

int main()
{
    int op = 0;
    int n = 0;
    int fil = 0;
    int i = 0;
    int j = 0;

    // Ejecutar el menú al menos una vez y repetir mientras la opción sea diferente de 3
    do
    {
        printf("          MENU           \n");
        printf("1. Figura (Marco)\n");
        printf("2. Serie de Fibonacci\n");
        printf("3. Salir\n");
        printf("Ingrese opcion: ");
        scanf("%d", &op);

        // Seleccionar el bloque de código a ejecutar según el valor numérico de la opción elegida
        switch (op)
        {
            case 1:
            {
                //  Solicitar el número de filas y repetir en bucle si el valor ingresado es menor o igual a cero
                do
                {
                    printf("Ingrese numero de filas (> 0): ");
                    scanf("%d", &fil);

                    //  Validar si el número de filas es inválido para mostrar un mensaje de error
                    if (fil <= 0)
                    {
                        printf("Error: El numero de filas debe ser mayor a cero.\n");
                    }
                }
                while (fil <= 0);

            // Recorrer iterativamente las filas y columnas de la matriz para dibujar la figura espacial
            for (i = 0; i < fil; i++)
            {
                for (j = 0; j < fil; j++)
                {
                    // Evaluar si la posición actual (i, j) corresponde a los bordes exteriores de la matriz
                    if ((i == 0) || (i == fil - 1) || (j == 0) || (j == fil - 1))
                    {
                        printf("* ");
                    }
        //Definir el comportamiento alternativo cuando la posición está en el espacio interno de la figura
        else
    {
        printf("  ");
    }
        }
        printf("\n");
        }
        break;
        }

    case 2:
    {
    // Pedir el número de términos de la serie y asegurar que se ingrese un valor estrictamente positivo
    do
    {
        printf("Ingrese numero de terminos (> 0): ");
        scanf("%d", &n);

        // Comprobar si el número de términos es inválido para advertir al usuario
        if (n <= 0)
{
    printf("Error: Ingrese un numero positivo de terminos.\n");
}
    }
    while (n <= 0);

        int a = 0;
        int b = 1;
        int c = 0;

        printf("Serie: ");

    //Controla el bucle iterativo que genera uno a uno los términos de la secuencia de Fibonacci
   for (i = 1; i <= n; i++)
   {
      // Asigna los valores iniciales o sumar los dos términos anteriores según la posición del índice
      if (i == 1)
      {
         c = 0;
      }
      else if (i == 2)
      {
         c = 1;
      }
     else
     {
        c = a + b;
        a = b;
        b = c;
     }

     // Formatear la salida en pantalla imprimiendo una coma o finalizando la secuencia limpia
     if (i == n)
     {
         printf("%d", c);
     }
     else
     {
            printf("%d, ", c);
     }
   }
          printf("\n");
          break;
        }

    case 3:
        printf("Gracias por entrar. ¡Hasta luego!\n");
        break;

    Captura cualquier opción numérica distinta a las válidas establecidas en el menú
    default:
                printf("No hay una opcion con ese numero. Intente de nuevo.\n");
                break;
        }

    }
    //Evaluar la condición de salida para mantener el programa activo mientras la opción sea distinta de 3
    while (op != 3);

    return 0;
}
