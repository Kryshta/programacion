#include <stdio.h>
#include <stdlib.h>
#include "header.h"

char pop(nodoLetra** pila, char elemento){
    if(pila==NULL){
        printf("\nLa pila esta vacia");
        return '\0';
    }

    nodoLetra* nodoTemp;
    nodoTemp = (nodoLetra*) malloc(sizeof(nodoLetra));

    nodoLetra *anterior;
    nodoLetra *actual;
    char caracterEncontrado;

    if(( (*(pila))->letra) == elemento){
        nodoTemp = *(pila);
        *(pila) = (*(pila))->nodoSiguiente;
        free(nodoTemp);
        return elemento;
    }

    anterior = *(pila);
    actual = (*(pila))->nodoSiguiente;

    while (actual->letra != elemento && actual->nodoSiguiente!=NULL){
        anterior = actual;
        actual = actual->nodoSiguiente;
    }

    if (actual->nodoSiguiente == NULL){
        printf("\nNo se encontro el caracter ingresado\n");
        return '\0';
    }
    else{
        caracterEncontrado = actual->letra;
        nodoTemp = actual;
        anterior->nodoSiguiente = actual->nodoSiguiente;
        free(nodoTemp);
        return caracterEncontrado;
    }

}

void push(nodoLetra** pila, char elemento){
    nodoLetra *nodoTemp=NULL;
    nodoTemp = (nodoLetra*) malloc(sizeof(nodoLetra));

    nodoTemp->letra = elemento;
    nodoTemp->nodoSiguiente = (*(pila))->nodoSiguiente;
    *(pila) = nodoTemp;

}


void mostrarPila(nodoLetra** pila){

    nodoLetra *anterior;
    nodoLetra *actual;

    anterior = *(pila);
    actual = (*(pila))->nodoSiguiente;

    if (pila!=NULL){
        printf("%c \t", anterior->letra);
        while (actual->nodoSiguiente!=NULL){
            printf("%c \t", actual->letra);
            anterior = actual;
            actual = actual->nodoSiguiente;
        }
        printf("%c \t", actual->letra);
    }
    else{
        printf("\nLa pila esta vacia");
    }
}

void mostrarmenu(){
    printf("\tPILA\n 1 - Agregar un elemento\n 2 - Eliminar un elemento\n 3 - Mostrar pila\n 0 - Salir\n Elija una opcion: ");
}
