#include <stdio.h>
int main(){
    int opcion, n, i, f, c, j;
    float resultado, potencia;

    do{
        printf("Menú\n");
        printf("1. Figura\n");
        printf("2. Serie\n");
        printf("3. Salir\n");

        printf("Escoja una opción: ");
        scanf("%d", &opcion);

        switch(opcion){
        case 1:
            printf("Ingrese el número filas: ");
            scanf("%d", &n);

            for(f=1; f<=n; f++){
                for(c=1; c<=n; c++){
                    if(f==1 || f==n || c==1 || c==n){
                        printf(" 1 ");
                    }else{
                        printf("   ");
                    }
                }
                printf("\n");
            }
            break;
        case 2:
            printf("Ingrese numero de terminos: ");
            scanf("%d", &n);

            resultado = 0;
            for (i = 1; i <= n; i++)
            {
                potencia = 1;
                for (j = 1; j <= i; j++)
                {
                    potencia = potencia * i;
                }
                if (i > 1)
                    printf(" + ");
                printf("%d.00^%d", i, i);
                resultado = resultado + potencia;
            }
            printf("\nEl resultado es %f\n", resultado);
            break;

        case 3:
            printf("Fin del programa");
            break;

        default:
            printf("Opción no valida\n");

        }

    }while(opcion!=3);

    return 0;

}
