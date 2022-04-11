#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void eliminarOcurrencias(int*, int, int);
void mostrarVec(int*, int);
void eliminarVecAtras(int*, int);

int main()
{
    int vec[TAM]={1,3,3,4,3,5,6,7,3,3};
    int elemento=3;
    eliminarOcurrencias(vec, TAM, elemento);
    mostrarVec(vec, TAM);
    return 0;
}

void eliminarOcurrencias(int *vec, int tam, int elemento){
    int i=tam;

    vec+=(tam-1);
    for(; i; i--)
    {
        if(*vec==elemento)
            eliminarVecAtras(vec, (tam-i));
        vec--;
    }

}

void eliminarVecAtras(int *vec, int ce){

    int i=0;
    while (i<ce)
    {
        *vec=*(vec+1);
        vec++;
        i++;
    }
    *vec=0;
}


void mostrarVec(int *vec, int ce){
    int i=0;
    for(; i<ce; i++)
        {
            printf("\t%d\n", *vec);
            vec++;
        }
}
