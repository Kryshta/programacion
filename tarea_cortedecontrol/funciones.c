#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "header.h"
/*
void encolar(t_cola* c, const registro dato, unsigned tam){
    t_nodo* nue;
    nue = malloc(sizeof(t_nodo));
    if (nue==NULL)
        exit(-1);
    nue->dato = dato;
    nue->tam = tam;
    nue->siguiente = NULL;

    if (c==NULL)
        *nue = c->primero;
    else{
        c->ultimo->siguiente = *nue;
    }
        c->ultimo = *nue;
}

void* desencolar(t_cola* c, void* dato, unsigned size){
    unsigned menor;
    if(c->primero == NULL)
        exit(-1);
    t_nodo* elim;

    elim = malloc(sizeof(t_nodo*));

    if( (sizeof(elim->dato)) > (sizeof(c->primero->dato)) )
        menor = sizeof(c->primero->dato);
    else
        menor = sizeof(elim->dato);

    memcpy(elim->dato, c->primero->dato, menor);
    c->primero = elim->siguiente;
    free(elim);

    if(c->primero==NULL)
       c->ultimo=NULL;
}

*/
