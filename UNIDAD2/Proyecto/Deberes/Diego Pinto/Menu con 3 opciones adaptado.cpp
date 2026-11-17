//Realizar un menu de 3 opciones para graficar un cuadrado, una serie y la opcion para salir (acabar el programa) que utilice funciones
//Elaborado por: Diego Pinto
#include <stdio.h>
#include <math.h>

//Implementación de la función para dibujar el marco
void dibujarMarco(int fil)
{
    for (int i = 0; i < fil; i++)//Controla las filas del cuadrado
    {
        for (int j = 0; j < fil; j++)//Controla las columnas del cuadrado
        {
            if ((i == 0) || (i == fil - 1) || (j == 0) || (j == fil - 1))//Imprime astediscos solo en los bordes de la figura y en la mitad imprime espacios
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

//Implementación de la función para la serie de Fibonacci
void generarFibonacci(int n)
{
    int a = 0;
    int b = 1;
    int c = 0;

    printf("Serie: ");

    for (int i = 1; i <= n; i++)//Controla los punto de partida de la serie de fibonacci antes de realizar la formula para los siguientes terminos
    {
        if (i == 1) //En la primera vuelta el primer valor de la serie debe tomar el valor de 0
        {
            c = 0;
        }
        else if (i == 2)//En la segunda vuelta el valor que debe tomar la serie debe ser 1
        {
            c = 1;
        }
        else//En los siguientes terminos de la serie se aplica la siguiente formula
        {
            c = a + b;
            a = b;
            b = c;
        }

        if (i == n)//Imprime el ultimo valor sin coma al final mientras que los otros valores si tienen coma
        {
            printf("%d", c);
        }
        else
        {
            printf("%d, ", c);
        }
    }
    printf("\n");
}


int main()
{
    int op = 0;
    int fil = 0;
    int n = 0;

    do
    {
        printf("MENU\n");
        printf("1. Figura (Marco)\n");
        printf("2. Serie de Fibonacci\n");
        printf("3. Salir\n");
        printf("Ingrese opcion: ");
        scanf("%d", &op);

        switch (op)//Evalua el numero para ver a que caso del menu corresponde
        {
            case 1:
                do
                {
                    printf("Ingrese numero de filas (> 0): ");
                    scanf("%d", &fil);
                    if (fil <= 0) //Evalua que el numero no sea negativo o 0
                    {
                        printf("Error: El numero de filas debe ser mayor a cero.\n");
                    }

                }
                while (fil <= 0);//Pide el numero de filas hasta que sea mayor que 0

                dibujarMarco(fil);
                break;

            case 2:
                do
                {
                    printf("Ingrese numero de terminos (> 0): ");
                    scanf("%d", &n);
                    if (n <= 0) //Evalua que no se ingrese un numero negativo o igual a 0
                    {
                       printf("Error: Ingrese un numero positivo de terminos.\n");
                    }
                 }
                while (n <= 0);//Pide un numero hasta que sea mayor que 0

                generarFibonacci(n);
                break;

            case 3:
                printf("Gracias por entrar\n");
                break;

            default:
                printf("No hay una opcion con ese numero. Intente de nuevo.\n");
                break;
               }

    }
    while (op != 3);//Mantiene el bucle repitiendo el menu mientras se coloquen las opciones 1 y 2 hasta que se coloque la opcion 3 que termina el bucle

    return 0;
}
