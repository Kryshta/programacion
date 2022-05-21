#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    printf("Hello world!\n");

    t_cola* cola;
    cola = malloc(sizeof(t_nodo));

    FILE* input;
    input = fopen("registros.txt", "rt");
    if (input==NULL)
        exit(-1);

    char auxString[999];
    t_nodo* newNode;
    newNode = malloc (sizeof(t_nodo));
    newNode->siguiente = NULL;

    while(!feof(input)){
        fgets(auxString, 999, input);
        sscanf(auxString, "%s %s %d %s %s %f", &newNode->dato.fecha,
                                                &newNode->dato.hora,
                                                &newNode->dato.nroCuenta,
                                                &newNode->dato.codSuc,
                                                &newNode->dato.operacion,
                                                &newNode->dato.monto);
        newNode->siguiente=NULL;
    }







    //registro de salida: 1 por cuenta/sucursal, fecha y hora mas actual, monto acumulado

    return 0;
}
