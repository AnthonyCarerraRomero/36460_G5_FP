#include <stdio.h>

int main(){
    int j,n, i;

    do{
        printf("Ingrese el numero de filas(Valores menores a 0 no son permitidos): ");
        scanf("%d", &n);
    }while(n<=0);


    for (i=1; i<=n; i++){
        for(j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");

    }


}

