#include <stdio.h>
#include <stdlib.h>
#define TAM 9

int* buscarElemento(int array[TAM], int objetivo);

int main()
{
    int array[TAM]={1,2,3,4,5,6,7,8,9};
    int objetivo;
    int* resultado;

    printf("Ingrese numero a buscar: ");
    scanf("%d", &objetivo);

    resultado = buscarElemento(array, objetivo);

    printf("%p", resultado);

    return 0;
}

int* buscarElemento(int array[TAM], int objetivo){
    int i;
    for(i=0; i<TAM; i++, array++){
        if (*array==objetivo)
            return array;
    }
    return NULL;
}
