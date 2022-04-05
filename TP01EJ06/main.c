#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    float x, numerador, termino, tol, total=0;
    int n=1, denominador, contador=0;

    printf("Calculo aproximado del seno de un numero \n");

    printf("Ingrese un numero: ");
    scanf("%f", &x);

    printf("Ingrese tolerancia: ");
    scanf("%f", &tol);

    do{
        numerador = x;
        denominador = factorial(n);

        termino = numerador/denominador;

        contador++;

        if(contador%2==0)
            total-=termino;
        else
            total+=termino;

        n+=2;
        x*=x;
        x*=x;

    }while (termino>tol);

    printf("El resultado es: %f", total);

    return 0;
}
