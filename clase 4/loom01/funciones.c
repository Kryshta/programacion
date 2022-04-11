#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void mostrarArray(int *array, int size){
    int i;
    for (i=0; i<size;array++, i++){
        printf ("%d ", *array);
    }
}

int eliminarOcurrencia(int *array, int cantElem, int elem){
    int i, j;
    for(i=0; i<cantElem; i++, array++){ //por cada ciclo aumento la direccion del puntero
        if(*array==elem){ //cada vez que hay una coincidencia
            for(j=cantElem;i<j;j--){ //contando desde el ultimo elemento hasta el elemento que coincidio
                *(array+cantElem-j)=*(array+cantElem-j+1); //reemplazo todos los elementos a partir de ese punto en adelante por el que tienen a continuacion
            }
        array--;
        i--;
        cantElem--; //al eliminar elementos, disminuye el tamaño del array

        }
    }
    return cantElem; //devuelvo la nueva cantidad de elementos tras la/s eliminacion/es
}
