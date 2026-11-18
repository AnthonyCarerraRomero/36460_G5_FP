#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opc;
    do
    {

        printf("Menu: \n");
        printf("1. Validar fecha\n");
        printf("2. Desplegar serie de letras\n");
        printf("3. Desplegar serie numeros\n");
        printf("4. Salir\n");

        printf("Ingrese una opcion: \n");
        scanf("%d", &opc);

        system("cls");

        switch(opc)
        {
        case 1:
            {

                int anio, mes, dia, max_dias;
                const char *nombres_mes[] =
                {
                    "", "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
                    "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"
                };

                do
                {
                    printf("Ingrese el anio (1900 - 2015): ");
                    scanf("%d", &anio);
                }
                while (anio < 1900 || anio > 2015);

                do
                {
                    printf("Ingrese el mes (1 - 12): ");
                    scanf("%d", &mes);

                }
                while (mes < 1 || mes > 12);

                if (mes==2){
                    max_dias=29;
                }else if (mes==4 || mes==6 || mes==9 || mes==11){
                    max_dias=30;
                }else{
                    max_dias=31;
                }

                do {
                    printf("Ingrese el dia (1 - %d): ", max_dias);
                    scanf("%d", &dia);
                    if (dia < 1 || dia > max_dias) {
                        printf("Dia no vaido; intente de nuevo\n");
                    }
                } while (dia < 1 || dia > max_dias);

                printf("\nLa fecha es: %d de %s de %d\n", dia, nombres_mes[mes], anio);



                break;

            }
        default:
            printf("\nError de formato\n");
        }

    }
    while(opc!=4);



}
