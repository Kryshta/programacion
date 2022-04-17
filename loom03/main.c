#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int determinarSimetria(int matriz[][TAM], int n);
void evaluarResultado(int resultado);

int main()
{

    int matriz[][TAM]={{1,2,3,4,6},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
    int matriz2[][TAM]={{1,0,0,0,0},{0,2,0,0,0},{0,0,3,0,0},{0,0,0,4,0},{0,0,0,0,5}};
    int resultado, n=TAM;

    resultado = determinarSimetria(matriz, n);

    evaluarResultado(resultado);

    resultado = determinarSimetria(matriz2, n);

    evaluarResultado(resultado);

    return 0;
}

int determinarSimetria(int matriz[][TAM], int n){
    int i,j;

    for(i=0;i<n;i++){
        for(j=(i+1);j<n;j++){ //en cada caso arranco desde la posicion que le sigue a la diagonal principal para minimizar la cantidad de comparaciones
            if(matriz[i][j] != matriz[j][i])
                return 0;
        }
    }
    return 1;
}

void evaluarResultado(int resultado){
    if(resultado==0)
        printf("La matriz no es simetrica \n");
    else
        printf("La matriz es simetrica \n");
}
