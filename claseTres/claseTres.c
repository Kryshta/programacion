#include <stdio.h>
#include <stdlib.h>
#include "claseTres.h"

void mostrarvec (int* vec, int tam){
    int i;
    for(i=0; i<tam; i++){
        printf("%d", *vec);
        vec++;
    }
}
/*
void insertarPos(int *vec, int size, int pos, int elemento, int cantElem){
    int i, vecaux1, vecaux2;
    vecaux1=*(vec+(pos-1));

    for(i=pos-1; i<size || i<cantElem; i++){
        vecaux2=*(vec+(i+1));
        *(vec+(i+1))=vecaux1;
        vecaux1=vecaux2;
    }
    *(vec+(pos-1))=elemento;
}
*/
void insertarPos2(int *vec, int size, int pos, int elemento, int cantElem){
    int i=pos-1, vecaux;

    vec+=(pos-1);

    while(i<size){
        vecaux=*vec;
        *vec=elemento;
        vec++;
        elemento=vecaux;
        i++;
        }

}

int buscarPosicion(int *vec, int elemento){
    int posicion;

    for(posicion=0; elemento>*vec; posicion++){
        vec++;
    }

    return posicion;

}

void eliminarElemento(int *vec, int posicion, int TAM){
    vec+=(posicion-1);
    while(posicion<TAM){
        *vec=*vec+1;
        vec++;
        posicion++;
    }
    *vec=0;
}

