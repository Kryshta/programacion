#include <stdio.h>
#include <stdlib.h>
#include "header.h"


int main()
{
    int m, n, numerador, resta, denominador, denominador1, denominador2, resultado;
    printf("Programa de calculo de numero combinatorio!\n");

    do{
    printf("Ingrese numero m:");
    scanf("%d", &m);

    printf("Ingrese numero n:");
    scanf("%d", &n);
    }while(m<n || n<0);

    numerador = factorial(m);

    resta=m-n;

    denominador1 = factorial(m);
    denominador2 = factorial(resta);
    denominador = denominador1*denominador2;

    resultado = numerador/denominador;

    //printf("Resta: %d \n", resta);
    //printf("Numerador: %d \n", numerador);
    //printf("Denominador: %d \n", denominador);
    printf("El resultado de la combinatoria es: %d", resultado);

    return 0;
}
