#include <stdio.h>
#include <stdbool.h>

/*Integrantes:Anthony Carrera, Diego Cumbal y Diego Pinto

Ejercicio 1: Media de dos valores
Desarrolla un programa que ingrese dos números por teclado e imprima su media.
Realiza y completa la tabla de objetos del problema 1.1:*/
/**
int main(void){
    float num1, num2, media;

    printf("Ingrese el primer número: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo número: ");
    scanf("%f", &num2);

    media=(num1+num2)/2;

    printf("la media de %.2f y %.2f es: %.2f\n", num1, num2, media);

    return 0;
}
**/

/*Ejercicio 2: Valor absoluto de x al cubo  */
/**
int main(void){
    float x, resultado;

    printf("Ingrese un valor: ");
    scanf("%f", &x);

    resultado=x*x*x;

    printf("El valor absoluto de %.2f al cubo es: %.2f \n", x, resultado);

    return 0;
}
**/

/**Ejercicio 3: Divisible**/
/**
int main(void){
    int x, y;
    printf("Ingrese el valor de x: ");
    scanf("%d", &x);
    printf("Ingrese el valor de y: ");
    scanf("%d", &y);

    if (y==0){
        printf("No se puede dividir por cero");
    }else if (x%y==0){
        printf("%d es divisible para %d", x, y);
    }else{
        printf("%d es no es divisible para %d", x, y);
    }
}
**/

/**Problema 1.4. Intervalo**/
/**
int main(void){
    float n;

    printf("Ingrese un valor: ");
    scanf("%f", &n);

    if (n>=0 && n<=10){
        printf("%.2f pertenece al intervalo [0,10]", n);
    }else{
        printf("%.2f no pertenece al intervalo [0,10]", n);
    }
}
**/

/**Problema 1.5. Conversión de unidades de tiempo**/
/**
int main(){

    int c, dias, horas, minutos, segundos, resto;

    printf("Ingrese el número de segundos (c): ");
    scanf("%d", &c);

    dias = c / (24 * 60 * 60);
    resto = c % (24 * 60 * 60);
    horas = resto / (60 * 60);
    resto = resto % (60 * 60);
    minutos = resto / 60;
    segundos = resto % 60;

    printf("Conversión de unidades:\n");
    printf("Días: %d\n", dias);
    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos);

    return 0;
}
**/

/**Problema 1.6. Máximo, mínimo y media de alturas**/
/**
int main()
{
    float altura, maximo, minimo, media_alt, suma;
    int cant;

    cant = 0;
    suma = 0;

    printf("Ingrese una altura ( valor negativo para salir ): ");
    scanf("%f", &altura);

    if (altura > 0) {
        maximo = altura;
        minimo = altura;

        while (altura > 0) {
            suma = suma + altura;
            cant = cant + 1;

            if (altura > maximo) {
                maximo = altura;
            } else {
                if (altura < minimo) {
                    minimo = altura;
                }
            }

            printf("Ingrese una altura ( valor negativo para salir ): ");
            scanf("%f", &altura);
        }

        media_alt = suma / cant;
        printf("La altura maxima es: %.2f\n", maximo);
        printf("La altura minima es: %.2f\n", minimo);
        printf("La media de las alturas es: %.2f\n", media_alt);
    } else {
        printf("Error: no se ingresaron datos de tipo numerico\n");
    }
}
**/

/**Problema 1.7. Raíz cuadrada entera**/
/**
int main(void)
{
    int n, i, r;

    printf("Ingrese un numero entero positivo N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Error: N debe ser positivo\n");
    } else {
        i = 1;
        while ((long long)i * i <= n) {
            i = i + 1;
        }
        r = i - 1;

        printf("La raiz cuadrada entera de %d es: %d\n", n, r);
    }
}
**/

/**Problema 1.8. Número primo**/
/**
int main(void)
{
    int num, divisor;
    bool esPrimo;

    do {
        printf("Ingrese un numero: ");
        scanf("%d", &num);
        if (num <= 1) {
            printf("El valor debe ser mayor que 1\n");
        }
    } while (num <= 1);

    esPrimo = true;

    if (num < 2) {
        esPrimo = false;
    }

    divisor = 2;

    while (esPrimo && divisor * divisor <= num) {
        if (num % divisor == 0) {
            esPrimo = false;
        }
        divisor = divisor + 1;
    }

    if (esPrimo) {
        printf("El numero ingresado es primo\n");
    } else {
        printf("El numero ingresado no es primo\n");
    }
}
**/

/**Problema 1.9. Números primos comprendidos entre dos números dados**/
/**

int es_primo(int n)
{
    int resultado, divisor;

    resultado = 1;

    if (n < 2) {
        resultado = 0;
    }

    divisor = 2;

    while (resultado && divisor * divisor <= n) {
        if (n % divisor == 0) {
            resultado = 0;
        }
        divisor = divisor + 1;
    }

    return resultado;
}

void primos_entre_dos_numeros(void)
{
    int inicio, fin_num, num, temp;

    printf("Ingrese el primer numero: ");
    scanf("%d", &inicio);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &fin_num);

    if (inicio > fin_num) {
        temp = inicio;
        inicio = fin_num;
        fin_num = temp;
    }

    printf("Numeros primos entre %d y %d:\n", inicio, fin_num);

    for (num = inicio; num <= fin_num; num++) {
        if (es_primo(num)) {
            printf("%d\n", num);
        }
    }
}

int main(void)
{
    primos_entre_dos_numeros();
    return 0;
}
**/

/**Problema 1.10. Factorial**/
/**
int main(void)
{
    int n, i;
    unsigned long long factorial;

    printf("Ingrese un numero entero n >= 0: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: el factorial no esta definido para negativos\n");
    } else if (n > 20) {
        printf("Error: n es demasiado grande\n");
    } else {
        factorial = 1;

        for (i = 1; i <= n; i++) {
            factorial = factorial * i;
        }

        printf("%d! = %d\n", n, factorial);
    }
}
**/
/**Problema 1.11. Serie de Fibonacci
int main()
{
    int n, i;
    int anterior = 0, actual = 1, siguiente;

    printf("Cuántos términos quieres? ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n debe ser mayor o igual a 1\n");
        return 0;
    }

    for (i = 1; i <= n; i++) {
        printf("%d ", anterior);
        siguiente = anterior + actual;
        anterior = actual;
        actual = siguiente;
    }
    printf("\n");

    return 0;
}
**/

/**Problema 1.12. Suma de dígitos

int main(void){
    int n, suma=0, digito;

    printf("Ingrese un número: ");
    scanf("%d", &n);

    if (n<=0){
        printf("El número deber ser positivo");
        return 0;
    }

    while(n>0){
        digito=n%10;
        suma =suma+digito;
        n=n/10;
    }

    printf("La suma de sus dígitos es: %d\n", suma);
    return 0;
}
**/

/**
Problema 1.13. Número capicúa

int main()
{
    int n, copia, digito, invertido = 0;

    printf("Ingresa un entero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("El número debe ser positivo\n");
        return 0;
    }

    copia = n;
    while (copia > 0) {
        digito = copia % 10;
        invertido = invertido * 10 + digito;
        copia = copia / 10;
    }

    if (invertido == n)
        printf("%d es capicúa\n", n);
    else
        printf("%d no es capicúa\n", n);

    return 0;
}
**/

/**Problema 1.14. Máximo común divisor (algoritmo de Euclides)
int main()
{
    int a, b, resto, mcd;

    printf("Ingresa el primer número: ");
    scanf("%d", &a);
    printf("Ingresa el segundo número: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Los números deben ser positivos\n");
        return 0;
    }

    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }

    mcd = a;
    printf("El MCD es: %d\n", mcd);

    return 0;
}
**/

/**Problema 1.15. Año bisiesto
int main()
{
    int anio;

    printf("Ingresa un año: ");
    scanf("%d", &anio);

    if ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0)
        printf("%d es bisiesto\n", anio);
    else
        printf("%d no es bisiesto\n", anio);

    return 0;
}
**/

/**Problema 1.16. Número perfecto
int main()
{
    int n, d, suma = 0;

    printf("Ingresa un entero positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("El número debe ser positivo\n");
        return 0;
    }

    for (d = 1; d < n; d++) {
        if (n % d == 0)
            suma = suma + d;
    }

    if (suma == n)
        printf("%d es perfecto\n", n);
    else
        printf("%d no es perfecto\n", n);

    return 0;
}
**/

/**Problema 1.17. Conversión de decimal a binario
int main()
{
    int n, resto;
    long pot = 1, binario = 0;

    printf("Ingresa un numero positivo: ");
    scanf("%d", &n);

    while (n > 0) {
        resto = n % 2;
        binario = binario + resto * pot;
        pot = pot * 10;
        n = n / 2;
    }

    printf("En binario: %ld\n", binario);

    return 0;
}
**/

/**Problema 1.18. Triángulo de asteriscos

int main()
{
    int n, i, j;

    printf("Ingresa el numero de filas: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
**/

/**Problema 1.19. Segundo mayor de una secuencia
int main()
{
    int x, mayor = 0, segundo = 0, cont = 0;

    printf("Ingresa un numero (0 para terminar): ");
    scanf("%d", &x);

    while (x != 0) {
        cont++;
        if (x > mayor) {
            segundo = mayor;
            mayor = x;
        } else if (x > segundo) {
            segundo = x;
        }
        printf("Ingresa un numero (0 para terminar): ");
        scanf("%d", &x);
    }

    if (cont < 2)
        printf("Se necesitan al menos dos valores\n");
    else
        printf("Mayor = %d, segundo mayor = %d\n", mayor, segundo);

    return 0;
}
**/

/**Problema 1.20. Adivina el número

int main()
{
    int secreto = 37, intento = 0, cont = 0;

    printf("Pense un numero entre 1 y 100, adivinalo\n");

    while (intento != secreto) {
        printf("Tu intento: ");
        scanf("%d", &intento);
        cont++;

        if (intento < secreto)
            printf("Mas alto\n");
        else if (intento > secreto)
            printf("Mas bajo\n");
        else
            printf("Acertaste!\n");
    }

    printf("Usaste %d intentos\n", cont);

    return 0;
}
**/
