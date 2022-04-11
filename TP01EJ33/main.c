#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{

    int matriz[][TAM]={{1,2,3,4,6},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
    int matriz2[][TAM]={{1,0,0,0,0},{0,2,0,0,0},{0,0,3,0,0},{0,0,0,4,0},{0,0,0,0,5}};
    int resultado, n=TAM;

    resultado = determinarSimetria(matriz, n);

    if(resultado==0)
        printf("La matriz no es simetrica \n");
    else
        printf("La matriz es simetrica \n");

    resultado = determinarSimetria(matriz2, n);

    if(resultado==0)
        printf("La matriz no es simetrica \n");
    else
        printf("La matriz es simetrica \n");

    return 0;
}
