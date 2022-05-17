#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

typedef struct nodoLetra{
    char letra;
    struct nodoLetra* nodoSiguiente;
} nodoLetra;

char pop(nodoLetra** pila, char elemento);
void push(nodoLetra** pila, char elemento);
void mostrarPila(nodoLetra** pila);
void mostrarmenu();

#endif // HEADER_H_INCLUDED
