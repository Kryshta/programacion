#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main()
{
    int opcion = -1;
    char elemento;
    nodoLetra* pila;
    pila = (nodoLetra*) malloc(sizeof(nodoLetra));

    while(opcion != 0){
        mostrarmenu();
        scanf("%d", &opcion);

        switch (opcion){
            case 1: fflush (stdin);
                    scanf("%c", &elemento);
                    push(&pila, elemento);
                    break;
            case 2: fflush (stdin);
                    scanf("%c", &elemento);
                    pop(&pila, elemento);
                    break;
            case 3: mostrarPila(&pila);
                    break;
            case 0: exit(1);
                    break;
            default: printf("\nOpcion invalida\n");
        }
    }

    return 0;
}
