#include <stdio.h>
#include <stdlib.h>
#include "header.h"
#define TAM 9

int main()
{
    int cantElem=8, elem, nuevaCantElem;
    int array[TAM]={0,1,1,1,4,0,1,2};

    mostrarArray(array, TAM);

    printf("\n Ingrese elemento a eliminar del array: ");
    scanf("%d", &elem);

    nuevaCantElem=eliminarOcurrencia(array, cantElem, elem);

    mostrarArray(array, nuevaCantElem);


    return 0;
}
