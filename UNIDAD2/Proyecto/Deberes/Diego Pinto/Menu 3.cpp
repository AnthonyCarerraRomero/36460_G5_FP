#include <stdio.h>

#include <stdlib.h>


int main()
{

    int opc;


    do {
        //Este es nuestro men� de usuario
        printf("Menu\n");
        printf("1. Validar fecha\n");
        printf("2. Desplegar serie de letras\n");
        printf("3. Desplegar serie de numero\n");
        printf("4: Salir\n");

        printf("Ingrese una opcion: ");
        scanf("%d", &opc);


        switch (opc) {
            case 1: {
               int anio, mes, dia, maxDias;
                const char *nombreMes;

                do {
                    printf("Ingrese el anio:\n");
                    scanf("%d", &anio);
                    if (anio < 1900 || anio > 2015) {
                        printf("Error: Anio fuera de intervalo. Intente de nuevo.\n");
                    }
                } while (anio < 1900 || anio > 2015);

                do {
                    printf("Ingrese el mes:\n");
                    scanf("%d", &mes);
                    if (mes < 1 || mes > 12) {
                        printf("Error: Mes fuera de intervalo. Intente de nuevo.\n");
                    }
                } while (mes < 1 || mes > 12);

                if (mes == 2) {
                    maxDias = 29;
                }
                else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
                    maxDias = 30;
                }
                else {
                    maxDias = 31;
                }

                do {
                    printf("Ingrese el dia (1 a %d): ", maxDias);
                    scanf("%d", &dia);
                    if (dia < 1 || dia > maxDias) {
                        printf("Error: Dia invalido para este mes. Intente de nuevo.\n");
                    }
                } while (dia < 1 || dia > maxDias);

                switch (mes) {
                    case 1:  nombreMes = "enero"; break;
                    case 2:  nombreMes = "febrero"; break;
                    case 3:  nombreMes = "marzo"; break;
                    case 4:  nombreMes = "abril"; break;
                    case 5:  nombreMes = "mayo"; break;
                    case 6:  nombreMes = "junio"; break;
                    case 7:  nombreMes = "julio"; break;
                    case 8:  nombreMes = "agosto"; break;
                    case 9:  nombreMes = "septiembre"; break;
                    case 10: nombreMes = "octubre"; break;
                    case 11: nombreMes = "noviembre"; break;
                    case 12: nombreMes = "diciembre"; break;
                    default: nombreMes = "mes invalido"; break;
                }

                printf("\nLa fecha ingresada es: %d de %s de %d\n", dia, nombreMes, anio);
                getchar(); getchar();
                system("cls");
                break;
            }

            case 2: {
                getchar(); getchar();
                system("cls");
                break;
            }

            case 3:{
            getchar(); getchar();
                system("cls");

            break;
            }


            case 4:{

                printf("Saliendo del programa...\n");
                getchar(); getchar();
                system("cls");
                break;
            default:
                printf("Opcion invalida.\n");
                getchar(); getchar();
                system("cls");
                break;
        }
        }

    } while (opc != 4);

    return 0;
}



