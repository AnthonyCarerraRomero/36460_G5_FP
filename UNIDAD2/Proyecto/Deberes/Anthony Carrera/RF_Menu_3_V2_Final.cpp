#include <stdio.h>
#include <stdlib.h>
int main()
{
    int opc;
    do
    {
        printf("\nMenu: \n");
        printf("1. Validar fecha\n");
        printf("2. Desplegar serie de letras\n");
        printf("3. Desplegar serie numeros\n");
        printf("4. Salir\n");

        printf("\nIngrese una opcion: \n");
        scanf("%d", &opc);

        system("cls");

        switch(opc)
        {
        case 1:
        {
            //Declaracion de las variables utilizadas
            int anio, mes, dia, dia_max;

            //Este es un vector que apunta a cada elemento del mismo.
            //Si no lo usara es como un vector de 12 caracteres sueltos, y ahí no cabe “Enero” completo en una sola posición.
            char *vector_mes[]=
            {
                "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio",
                "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"
            };

            printf("\n-----Opcion 1: Validar fecha-----\n");

            // Todos los do-while que se utilizaron sirven para valida que el año,
            //mes y dia se ingrese en el rango establecido
            do
            {
                printf("\nIngrese un anio (1900-2015): \n");
                scanf("%d", &anio);
                if (anio<1900 || anio>2015)
                {
                    printf("Advertencia: anio fuera del rango. Intente de nuevo.");
                }
            }
            while(anio<1900 || anio>2015);

            do
            {
                printf("\nIngrese un mes (1-12): \n");
                scanf("%d", &mes);

                if (mes<1 || mes >12)
                {
                    printf("Advertencia: mes fuera de rango. Intente de nuevo.\n");
                }
            }
            while(mes<1 || mes >12);

            //Esto es para almacenar en una variable 'dia_max' los dias maximos que le corresponde a cada mes
            if (mes==2)
            {
                dia_max=29;
            }
            else if (mes==4 || mes==6 || mes==9 || mes==11)
            {
                dia_max=30;
            }
            else
            {
                dia_max=31;
            }

            do
            {
                printf("\nIngrese un dia (1-%d): \n",dia_max);
                scanf("%d", &dia);

                if (dia <1 || dia > dia_max)
                {
                    printf("Advertencia: el dia esta fuera de rango. Intente de nuevo.\n");
                }

            }
            while(dia <1 || dia > dia_max);

            printf("\nLa fecha es: %d de %s de %d\n",dia, vector_mes[mes-1], anio);

            break;

        }
        case 2:
        {
            int num, i;
            printf("\n-----Opcion 2: Desplegar serie de latras-----\n");

            //En esta parte valida que se ingrese un valor mayor a cero
            do
            {
                printf("\nIngrese la cantidad de terminos: ");
                scanf("%d", &num);
                printf("\n");
                if (num<0)
                {
                    printf("Advertencia: el valor debe ser mayor a vero. Intente de nuevo.\n");
                }
            }
            while(num<0);

            //Esto es para imprimir desde 'a' hasta el valor ingresado por el usuario y avanzando dos posiciones
            for (i=0; i<num && 'a' + 2*i <='z'; i++)
            {
                printf(" %c ", ' a' + 2*i);
            }
            printf("\n");

            //Esto es para  mostrar un '-' por cada termino
            for (i=0; i<num && 'b' + 2*i <='z'; i++)
            {
                printf(" - ");
            }
            printf("\n");

            //El mismo enfoque que en el primer for, pero esta vez comienza con 'b'
            for (i=0; i<num && 'b' + 2*i<='z'; i++)
            {
                printf(" %c ", 'b' + 2*i);
            }
            printf("\n");
            break;
        }
        case 3:
        {
            int num, i;
            int a=1, b=5;

            printf("\n-----Opcion 3: Desplegar serie de numeros-----\n");
            do
            {
                printf("\nIngrese la cantidad de terminos: ");
                scanf("%d", &num);

                if (num<0)
                {
                    printf("Advertencia: el valor debe ser mayor a cero. Intente de nuevo.\n");
                }
            }
            while(num<0);

            printf("\n");

            //num / 2 = cantidad de parejas completas (no detecta decimales)
            //cada vuelta del for imprime una pareja
            for (i = 0; i < num / 2; i++)
            {
                printf("%d, %d", a, b); // imprime la pareja actual
                a += 2;
                b += 2;
                if (i < num / 2 - 1 || num % 2 == 1)
                {
                    printf(", ");
                }
            }

            // si la cantidad es impar, sobra un termino.
            //mostramos el siguiente de la primera subsecuencia
            if (num % 2 == 1)
            {
                printf("%d", a);
            }

            printf("\n");

            break;
        }
        case 4:
        {
            printf("\nSalir...\n");
            break;
        }
        default:
            printf("\nError de formato\n");

        }
    }
    while(opc !=4);

    return 0;
}
