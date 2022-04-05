#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, n=1;
    float tol, resultado=1, termino;

    printf("Programa de calculo de e^x\n");

    printf("Ingrese un numero entero x: ");
    scanf("%d", &x);

    printf("Ingrese un valor de tolerancia: ");
    scanf("%f", &tol);

    do{
        termino=x/(float)n;
        resultado+=termino;
        x*=x;
        n*=(n+1);

    }while(termino>tol);

    printf("El resultado es %f: ", resultado);

    return 0;
}
