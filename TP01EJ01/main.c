#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    int nro, resultado;

    printf("Ingrese un numero: ");
    scanf("%d", &nro);

    resultado = factorial(nro);

    printf("El factorial del numero ingresado es %d",resultado);

    return 0;
}
