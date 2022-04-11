#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{

    int matriz[][TAM]={{1,1,1,1,1},{2,2,2,2,2},{3,3,3,3,3},{4,4,4,4,4},{5,5,5,5,5}};
    int n=TAM;

    mostrarMatriz(matriz, n);

    trasponerMatriz(matriz, n);

    mostrarMatriz(matriz, n);


    return 0;
}
