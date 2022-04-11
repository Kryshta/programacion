#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{

    int matriz[][TAM]={{1,2,3,4,6},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
    int matriz2[][TAM]={{1,0,0,0,0},{0,2,0,0,0},{0,0,3,0,0},{0,0,0,4,0},{0,0,0,0,5}};
    int resultado, n=TAM;


    resultado = esMatrizDiagonal(matriz, n);

    if(resultado==0)
        printf("No es una matriz identidad :( \n");
    else
        printf("Es una matriz identidad :) \n");

    resultado = esMatrizDiagonal(matriz2, n);

    if(resultado==0)
        printf("No es una matriz identidad :( \n");
    else
        printf("Es una matriz identidad :) \n");

    return 0;
}
